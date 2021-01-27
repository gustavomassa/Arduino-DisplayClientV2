#ifndef __SHI2CLCDBASE_H__
#define __SHI2CLCDBASE_H__

#include <Arduino.h>


class SHI2CLcdBase {
private:
	int _width;
	int _height;
public:

	void begin(int width, int height, bool test) {
		_width = width;
		_height = height;
	}

	void read() {
		// Skip one byte
		FlowSerialTimedRead();
		int row = FlowSerialTimedRead();
		if (row < _height) {
			setCursor(0, row);
			print(FlowSerialReadStringUntil('\n').substring(0, _width));
		}
		else {
			FlowSerialReadStringUntil('\n');
		}
	}

	virtual void setCursor(int x, int y);
	virtual void print(String s);

};

#endif