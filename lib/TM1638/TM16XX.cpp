/*
TM16XX.cpp - Library implementation for TM16XX.

Copyright (C) 2011 Ricardo Batista (rjbatista <at> gmail <dot> com)

This program is free software: you can redistribute it and/or modify
it under the terms of the version 3 GNU General Public License as
published by the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif

#include "TM16XX.h"
#include "string.h"
void TM16XX::o_digitalWrite(uint8_t pin, uint8_t val){
	
	
	uint8_t bit = digitalPinToBitMask(pin);
	uint8_t port = digitalPinToPort(pin);
	volatile uint8_t *out;

	out = portOutputRegister(port);

	if (val == LOW) {
		*out &= ~bit;
	} else {
		*out |= bit;
	}
}

void TM16XX::o_clock_digitalWrite( uint8_t val){
	
	if (val == LOW) {
		*clockPin_out &= ~clockPin_bit;
	} else {
		*clockPin_out |= clockPin_bit;
	}
}

void TM16XX::o_strobe_digitalWrite(uint8_t val){
	

	if (val == LOW) {
		*strobePin_out &= ~strobePin_bit;
	} else {
		*strobePin_out |= strobePin_bit;
	}
}

void TM16XX::o_data_digitalWrite( uint8_t val){
	

	if (val == LOW) {
		*dataPin_out &= ~dataPin_bit;
	} else {
		*dataPin_out |= dataPin_bit;
	}
}


TM16XX::TM16XX(byte dataPin, byte clockPin, byte strobePin, byte displays, boolean activateDisplay,
	byte intensity)
{
  this->dataPin = dataPin;
  this->clockPin = clockPin;
  this->strobePin = strobePin;
  this->displays = displays;

  this->dataPin_bit = digitalPinToBitMask(dataPin);
	uint8_t dataport = digitalPinToPort(dataPin);
	 this->dataPin_out = portOutputRegister(dataport);
	 
	 this->clockPin_bit = digitalPinToBitMask(clockPin);
	uint8_t clockport = digitalPinToPort(clockPin);
	 this->clockPin_out = portOutputRegister(clockport);
	 
	 this->strobePin_bit = digitalPinToBitMask(strobePin);
	uint8_t strobeport = digitalPinToPort(strobePin);
	 this->strobePin_out = portOutputRegister(strobeport);
  
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(strobePin, OUTPUT);

  o_digitalWrite(strobePin, HIGH);
  o_digitalWrite(clockPin, HIGH);

  sendCommand(0x40);
  sendCommand(0x80 | (activateDisplay ? 8 : 0) | min(7, intensity));

  o_digitalWrite(strobePin, LOW);
  send(0xC0);
  for (int i = 0; i < 16; i++) {
    send(0x00);
  }
  o_digitalWrite(strobePin, HIGH);
}



void TM16XX::setupDisplay(boolean active, byte intensity)
{
  sendCommand(0x80 | (active ? 8 : 0) | min(7, intensity));

  // necessary for the TM1640
  o_digitalWrite(strobePin, LOW);
  o_digitalWrite(clockPin, LOW);
  o_digitalWrite(clockPin, HIGH);
  o_digitalWrite(strobePin, HIGH);
}

void TM16XX::setDisplayDigit(byte digit, byte pos, boolean dot, const byte numberFont[])
{
  sendChar(pos, numberFont[digit & 0xF], dot);
}

void TM16XX::setDisplayToError()
{
    setDisplay(ERROR_DATA, 8);

	for (int i = 8; i < displays; i++) {
	    clearDisplayDigit(i, 0);
	}
}

void TM16XX::clearDisplayDigit(byte pos, boolean dot)
{
  sendChar(pos, 0, dot);
}

void TM16XX::setDisplay(const byte values[], unsigned int size)
{
  for (int i = 0; i < size; i++) {
    sendChar(i, values[i], 0);
  }
}

void TM16XX::clearDisplay()
{
  for (int i = 0; i < displays; i++) {
    sendData(i << 1, 0);
  }
}

void TM16XX::setDisplayToString(const char* string, const word dots, const byte pos, const byte font[])
{
  for (int i = 0; i < displays - pos; i++) {
  	if (string[i] != '\0') {
	  sendChar(i + pos, font[string[i] - 32], (dots & (1 << (displays - i - 1))) != 0);
	} else {
	  break;
	}
  }
}

void TM16XX::setDisplayToString(const String string, const word dots, const byte pos, const byte font[])
{
  int stringLength = string.length();

  for (int i = 0; i < displays - pos; i++) {
    if (i < stringLength) {
      sendChar(i + pos, font[string.charAt(i) - 32], (dots & (1 << (displays - i - 1))) != 0);
    } else {
      break;
    }
  }
}

void TM16XX::sendCommand(byte cmd)
{
  o_digitalWrite(strobePin, LOW);
  send(cmd);
  o_digitalWrite(strobePin, HIGH);
}

void TM16XX::sendData(byte address, byte data)
{
  sendCommand(0x44);
  o_digitalWrite(strobePin, LOW);
  send(0xC0 | address);
  send(data);
  o_digitalWrite(strobePin, HIGH);
}

void TM16XX::send(byte data)
{
  for (int i = 0; i < 8; i++) {
    o_digitalWrite(clockPin, LOW);
    o_digitalWrite(dataPin, data & 1 ? HIGH : LOW);
    data >>= 1;
    o_digitalWrite(clockPin, HIGH);
  }
}

byte TM16XX::receive()
{
  byte temp = 0;

  // Pull-up on
  pinMode(dataPin, INPUT);
  o_digitalWrite(dataPin, HIGH);

  for (int i = 0; i < 8; i++) {
    temp >>= 1;

    o_digitalWrite(clockPin, LOW);

    if (digitalRead(dataPin)) {
      temp |= 0x80;
    }

    o_digitalWrite(clockPin, HIGH);
  }

  // Pull-up off
  pinMode(dataPin, OUTPUT);
  o_digitalWrite(dataPin, LOW);

  return temp;
}

#if !defined(ARDUINO) || ARDUINO < 100
// empty implementation instead of pure virtual for older Arduino IDE
void TM16XX::sendChar(byte pos, byte data, boolean dot) {}
#endif

