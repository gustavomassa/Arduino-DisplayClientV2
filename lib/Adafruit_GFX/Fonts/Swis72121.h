

/*
 *
 * Swis72121
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : Swis72121.h
 * Date                : 19.01.2015
 * Font size in bytes  : 17238
 * Font width          : 10
 * Font height         : 21
 * Font first char     : 32
 * Font last char      : 128
 * Font used chars     : 96
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#include <inttypes.h>
#include <avr/pgmspace.h>

#ifndef SWIS72121_H
#define SWIS72121_H

#define SWIS72121_WIDTH 10
#define SWIS72121_HEIGHT 21

static const uint8_t Swis72121[] PROGMEM = {
    0x43, 0x56, // size
    0x0A, // width
    0x15, // height
    0x20, // first char
    0x60, // char count
    
    // char widths
    0x00, 0x04, 0x04, 0x0D, 0x08, 0x0C, 0x0C, 0x01, 0x06, 0x06, 
    0x07, 0x0D, 0x04, 0x05, 0x04, 0x06, 0x09, 0x09, 0x09, 0x09, 
    0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x04, 0x04, 0x0C, 0x0C, 
    0x0C, 0x08, 0x12, 0x0B, 0x09, 0x0A, 0x0A, 0x09, 0x09, 0x0A, 
    0x0A, 0x04, 0x07, 0x0A, 0x09, 0x0D, 0x0A, 0x0A, 0x0A, 0x0B, 
    0x0B, 0x0A, 0x0A, 0x0A, 0x0A, 0x10, 0x0B, 0x0A, 0x08, 0x05, 
    0x06, 0x06, 0x0C, 0x0A, 0x06, 0x09, 0x09, 0x08, 0x09, 0x09, 
    0x06, 0x09, 0x09, 0x04, 0x05, 0x08, 0x04, 0x0E, 0x09, 0x09, 
    0x09, 0x09, 0x06, 0x08, 0x05, 0x09, 0x08, 0x0D, 0x08, 0x08, 
    0x07, 0x07, 0x01, 0x07, 0x0C, 0x0A, 
    
    // font data
    0xFE, 0x02, 0x02, 0xFE, 0xF3, 0x94, 0x97, 0xF0, 0x00, 0x00, 0x00, 0x00, // 33
    0x7C, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 34
    0x00, 0x40, 0x40, 0x40, 0x40, 0xE0, 0x58, 0x44, 0xC0, 0x70, 0x4C, 0x44, 0x40, 0x04, 0x04, 0xE4, 0x1C, 0x07, 0x84, 0xE4, 0x1C, 0x07, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 35
    0x78, 0x84, 0x3A, 0x4A, 0x7B, 0x9A, 0x16, 0x1C, 0x38, 0x48, 0x99, 0xA1, 0xBE, 0x9C, 0x41, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, // 36
    0x7C, 0xC2, 0xBA, 0xBA, 0xC2, 0xFC, 0xF0, 0x3C, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xD8, 0x76, 0x0B, 0x7D, 0xC2, 0xBA, 0xBA, 0xC2, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 37
    0x00, 0x00, 0x3C, 0xC6, 0x3A, 0xCA, 0xBA, 0x46, 0x3C, 0x00, 0x00, 0x00, 0x3C, 0x62, 0xC1, 0x9C, 0xA2, 0xA4, 0xBB, 0x44, 0xC6, 0xB9, 0xC7, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 38
    0x7C, 0x00, 0x00, // 39
    0x80, 0x60, 0x18, 0xE4, 0x1E, 0x02, 0x3F, 0xC0, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x18, 0x20, 0x78, 0x40, // 40
    0x06, 0x3A, 0xC4, 0x18, 0x60, 0x80, 0x00, 0x80, 0x7F, 0x00, 0xC0, 0x3F, 0x60, 0x58, 0x20, 0x18, 0x00, 0x00, // 41
    0x18, 0x68, 0xEC, 0x4E, 0xB0, 0x68, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 42
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xFF, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 43
    0x00, 0x00, 0x00, 0x00, 0xF0, 0x90, 0x10, 0xF0, 0x30, 0x28, 0x10, 0x08, // 44
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x0A, 0x0A, 0x0A, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, // 45
    0x00, 0x00, 0x00, 0x00, 0xF0, 0x90, 0x90, 0xF0, 0x00, 0x00, 0x00, 0x00, // 46
    0x00, 0x00, 0x80, 0x70, 0xEC, 0x1E, 0x70, 0xCC, 0x3B, 0x07, 0x00, 0x00, 0x10, 0x08, 0x00, 0x00, 0x00, 0x00, // 47
    0xF8, 0x0C, 0x02, 0xFA, 0x0A, 0xFA, 0x02, 0x0C, 0xF8, 0x3F, 0x60, 0x80, 0xBF, 0xA0, 0xBF, 0x80, 0x60, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 48
    0x38, 0x28, 0xEC, 0x06, 0x02, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x80, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 49
    0x38, 0x24, 0x22, 0x3A, 0x8A, 0x7A, 0x02, 0x84, 0x78, 0xF0, 0x88, 0x84, 0xB2, 0xA9, 0xA4, 0xA3, 0xA0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 50
    0x1C, 0x14, 0x12, 0x9A, 0x8A, 0x7A, 0x02, 0x84, 0x78, 0x38, 0x48, 0x88, 0xBB, 0xA2, 0xBF, 0x81, 0x42, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 51
    0x00, 0x80, 0xF0, 0x8C, 0xF2, 0x02, 0x02, 0xFE, 0x00, 0x3C, 0x27, 0x2B, 0x28, 0xEF, 0x80, 0x80, 0xEF, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 52
    0xFC, 0x82, 0x82, 0xFA, 0xAA, 0x2A, 0x2A, 0x4E, 0x80, 0x38, 0x48, 0x88, 0xB8, 0xA0, 0x9F, 0xC0, 0x60, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 53
    0xF8, 0x0C, 0x06, 0xFA, 0x4A, 0x4A, 0x4A, 0xCE, 0x0C, 0x3F, 0x60, 0x80, 0xBF, 0xA1, 0xBF, 0x80, 0x40, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 54
    0x0E, 0x0A, 0x0A, 0x8A, 0x6A, 0x1A, 0xE2, 0x1E, 0x00, 0x00, 0x00, 0xF8, 0x87, 0x80, 0xFC, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 55
    0x78, 0x84, 0x02, 0xFA, 0x8A, 0xFA, 0x02, 0x84, 0x78, 0x3C, 0x42, 0x83, 0xBF, 0xA2, 0xBF, 0x83, 0x42, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 56
    0xF8, 0x04, 0x02, 0xFA, 0x0A, 0xFA, 0x02, 0x0C, 0xF8, 0x01, 0x66, 0xA4, 0xA5, 0xA5, 0xBF, 0x80, 0x60, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 57
    0xE0, 0x20, 0x20, 0xE0, 0xF1, 0x91, 0x91, 0xF1, 0x00, 0x00, 0x00, 0x00, // 58
    0xE0, 0x20, 0x20, 0xE0, 0xF1, 0x91, 0x11, 0xF1, 0x30, 0x28, 0x10, 0x08, // 59
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 0x40, 0x40, 0x20, 0x04, 0x06, 0x0A, 0x09, 0x09, 0x11, 0x10, 0x20, 0x20, 0x20, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 60
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 61
    0x20, 0x40, 0x40, 0x40, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x20, 0x20, 0x20, 0x10, 0x11, 0x09, 0x09, 0x0A, 0x06, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 62
    0x38, 0x24, 0x3A, 0x0A, 0xFA, 0x82, 0x44, 0x38, 0x00, 0x00, 0xF7, 0x95, 0x97, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 63
    0x00, 0xC0, 0x20, 0x10, 0x18, 0x08, 0x8C, 0x84, 0x44, 0x44, 0x44, 0x84, 0x84, 0x08, 0x08, 0x10, 0x20, 0xC0, 0x3F, 0xC0, 0x80, 0x00, 0x00, 0x3E, 0x61, 0x40, 0x40, 0x60, 0x20, 0x7E, 0x41, 0x40, 0x60, 0x20, 0x18, 0x07, 0x00, 0x00, 0x08, 0x18, 0x10, 0x10, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x10, 0x10, 0x08, 0x10, 0x00, 0x00, // 64
    0x00, 0x00, 0xF0, 0x0E, 0xF2, 0xFA, 0x02, 0x1E, 0xE0, 0x00, 0x00, 0xF0, 0x8F, 0xC0, 0x32, 0x15, 0x14, 0x17, 0x70, 0x83, 0xBC, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 65
    0xFE, 0x02, 0x02, 0xFA, 0x8A, 0xFA, 0x02, 0x84, 0x78, 0xFF, 0x80, 0x80, 0xBE, 0xA2, 0xBE, 0x81, 0x42, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 66
    0xF0, 0x0C, 0x06, 0xF2, 0x0A, 0x0A, 0x32, 0x22, 0x24, 0x38, 0x1F, 0x60, 0xC0, 0x9F, 0xA0, 0xA0, 0x9C, 0xC4, 0x64, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 67
    0xFE, 0x02, 0x02, 0xFA, 0x0A, 0x0A, 0xF2, 0x06, 0x0C, 0xF0, 0xFF, 0x80, 0x80, 0xBF, 0xA0, 0xA0, 0x9F, 0xC0, 0x60, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 68
    0xFE, 0x02, 0x02, 0xFA, 0x8A, 0x8A, 0x8A, 0x8A, 0x8E, 0xFF, 0x80, 0x80, 0xBE, 0xA2, 0xA2, 0xA2, 0xA2, 0xE3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 69
    0xFE, 0x02, 0x02, 0xFA, 0x8A, 0x8A, 0x8A, 0x8A, 0x8E, 0xFF, 0x80, 0x80, 0xFE, 0x02, 0x02, 0x02, 0x02, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 70
    0xF0, 0x0C, 0x06, 0xF2, 0x0A, 0x0A, 0x32, 0x22, 0x24, 0x38, 0x1F, 0x60, 0xC0, 0x9F, 0xA0, 0xA7, 0x5D, 0xC1, 0x81, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 71
    0xFE, 0x02, 0x02, 0xFE, 0x80, 0x80, 0xFE, 0x02, 0x02, 0xFE, 0xFF, 0x80, 0x80, 0xFE, 0x02, 0x02, 0xFE, 0x80, 0x80, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 72
    0xFE, 0x02, 0x02, 0xFE, 0xFF, 0x80, 0x80, 0xFF, 0x00, 0x00, 0x00, 0x00, // 73
    0x00, 0x00, 0x00, 0xFE, 0x02, 0x02, 0xFE, 0x78, 0xC8, 0x88, 0xBF, 0x80, 0xC0, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 74
    0xFE, 0x02, 0x02, 0xFE, 0x60, 0xD8, 0x26, 0x1A, 0x06, 0x02, 0xFF, 0x80, 0x81, 0xFC, 0x06, 0x18, 0x67, 0x98, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 75
    0xFE, 0x02, 0x02, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x80, 0xBF, 0xA0, 0xA0, 0xA0, 0xA0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 76
    0xFE, 0x02, 0x12, 0xF2, 0x9E, 0xE0, 0x80, 0x7C, 0x92, 0xF2, 0x02, 0x02, 0xFE, 0xFF, 0x80, 0x80, 0xFF, 0x0F, 0x77, 0xCF, 0x3E, 0x01, 0xFF, 0x80, 0x80, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 77
    0xFE, 0x02, 0x02, 0xE6, 0xF8, 0x00, 0xFE, 0x02, 0x02, 0xFE, 0xFF, 0x80, 0x80, 0xFF, 0x1E, 0x61, 0x8F, 0x80, 0x80, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 78
    0xF0, 0x0C, 0x06, 0xF2, 0x0A, 0x0A, 0xF2, 0x06, 0x0C, 0xF0, 0x1F, 0x60, 0xC0, 0x9F, 0xA0, 0xA0, 0x9F, 0xC0, 0x60, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 79
    0xFE, 0x02, 0x02, 0xFA, 0x8A, 0x8A, 0x72, 0x02, 0x04, 0xF8, 0xFF, 0x80, 0x80, 0xFE, 0x02, 0x02, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 80
    0xF0, 0x0C, 0x06, 0xF2, 0x0A, 0x0A, 0xF2, 0x06, 0x0C, 0xF0, 0x00, 0x1F, 0x60, 0xC0, 0x9F, 0xB0, 0xA8, 0x8F, 0x80, 0x70, 0x8F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, // 81
    0xFE, 0x02, 0x02, 0xFA, 0x8A, 0x8A, 0x72, 0x02, 0x84, 0x78, 0x00, 0xFF, 0x80, 0x80, 0xFE, 0x02, 0x02, 0xFD, 0x81, 0x82, 0xFC, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 82
    0x78, 0x84, 0x86, 0x32, 0x4A, 0x8A, 0x32, 0x22, 0x24, 0x38, 0x3C, 0x44, 0xC4, 0x9D, 0xA1, 0xA2, 0x9D, 0xC1, 0x42, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 83
    0x0E, 0x0A, 0x0A, 0xFA, 0x02, 0x02, 0xFA, 0x0A, 0x0A, 0x0E, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x80, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 84
    0xFE, 0x02, 0x02, 0xFE, 0x00, 0x00, 0xFE, 0x02, 0x02, 0xFE, 0x3F, 0x60, 0x80, 0x9F, 0xA0, 0xA0, 0x9F, 0xC0, 0x60, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 85
    0x0E, 0xF2, 0x06, 0xF8, 0x00, 0xC0, 0x3C, 0x02, 0xFA, 0x06, 0x00, 0x01, 0x1E, 0xE0, 0x9B, 0x87, 0xF0, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 86
    0x0E, 0xF2, 0x02, 0xFC, 0x00, 0xC0, 0x3C, 0xC2, 0x06, 0x78, 0x80, 0xC0, 0x3C, 0x02, 0xFA, 0x06, 0x00, 0x01, 0x3E, 0xC0, 0x8F, 0x83, 0x7C, 0x03, 0x0F, 0x70, 0x89, 0x87, 0xE0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 87
    0x06, 0x1A, 0x62, 0x86, 0x38, 0x60, 0x18, 0xC6, 0x32, 0x0E, 0x02, 0xC0, 0xB0, 0x8C, 0x63, 0x18, 0x0C, 0x31, 0x46, 0x98, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 88
    0x06, 0x3A, 0xC6, 0x38, 0xC0, 0x60, 0x18, 0xE6, 0x1E, 0x02, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x80, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 89
    0x0E, 0x0A, 0x0A, 0xEA, 0x1A, 0xCA, 0x32, 0x0E, 0xF0, 0x8C, 0xD3, 0xAC, 0xA3, 0xA0, 0xA0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 90
    0xFE, 0x02, 0x02, 0xFA, 0x0A, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0x78, 0x40, 0x40, 0x58, 0x50, // 91
    0x72, 0x9C, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0C, 0x77, 0xB8, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x08, 0x18, // 92
    0x0E, 0x0A, 0xFA, 0x02, 0x02, 0xFE, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x70, 0x50, 0x58, 0x40, 0x40, 0x78, // 93
    0x40, 0x40, 0x20, 0x10, 0x08, 0x04, 0x04, 0x08, 0x10, 0x20, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 95
    0x01, 0x03, 0x05, 0x09, 0x0E, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 96
    0x80, 0xC0, 0x20, 0xA0, 0xA0, 0xA0, 0x20, 0x40, 0x80, 0x73, 0xCA, 0x8A, 0xBB, 0xA4, 0xDB, 0x80, 0x80, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 97
    0xFE, 0x02, 0x02, 0xFE, 0xC0, 0xA0, 0x20, 0x60, 0xC0, 0xFF, 0x80, 0x80, 0xFF, 0xA0, 0xBF, 0x80, 0xC0, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 98
    0x80, 0x40, 0x20, 0xA0, 0xA0, 0xA0, 0x20, 0x40, 0x3F, 0x40, 0x80, 0xBF, 0xA0, 0xB9, 0x89, 0x49, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 99
    0xC0, 0x60, 0x20, 0xA0, 0xC0, 0xFE, 0x02, 0x02, 0xFE, 0x3F, 0xC0, 0x80, 0xBF, 0xA0, 0xFF, 0x80, 0x80, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 100
    0x80, 0x40, 0x20, 0xA0, 0xA0, 0xA0, 0x20, 0x40, 0x80, 0x3F, 0x40, 0x80, 0xBB, 0xAA, 0xAB, 0xA8, 0xA8, 0x6F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 101
    0xE0, 0xBC, 0x02, 0x02, 0xBA, 0xEE, 0x00, 0xFF, 0x80, 0x80, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 102
    0x80, 0x60, 0x20, 0xA0, 0xC0, 0xE0, 0x20, 0x20, 0xE0, 0x3F, 0x40, 0x80, 0xBF, 0xA0, 0xFF, 0x00, 0x00, 0xFF, 0x30, 0x50, 0x50, 0x50, 0x50, 0x48, 0x40, 0x20, 0x18, // 103
    0xFE, 0x02, 0x02, 0xFE, 0xC0, 0xA0, 0x20, 0x60, 0xC0, 0xFF, 0x80, 0x80, 0xFF, 0x00, 0xFF, 0x80, 0x80, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 104
    0xEE, 0x2A, 0x2A, 0xEE, 0xFF, 0x80, 0x80, 0xFF, 0x00, 0x00, 0x00, 0x00, // 105
    0x00, 0xEE, 0x2A, 0x2A, 0xEE, 0x00, 0xFF, 0x00, 0x00, 0xFF, 0x70, 0x58, 0x40, 0x60, 0x38, // 106
    0xFE, 0x02, 0x02, 0xFE, 0x00, 0x80, 0x40, 0xE0, 0xFF, 0x80, 0x84, 0xF3, 0x09, 0x30, 0x47, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 107
    0xFE, 0x02, 0x02, 0xFE, 0xFF, 0x80, 0x80, 0xFF, 0x00, 0x00, 0x00, 0x00, // 108
    0xE0, 0x20, 0x20, 0xE0, 0xA0, 0xA0, 0x20, 0x20, 0xC0, 0xC0, 0xA0, 0x20, 0x60, 0xC0, 0xFF, 0x80, 0x80, 0xFF, 0x00, 0xFF, 0x80, 0x80, 0xFF, 0x00, 0xFF, 0x80, 0x80, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 109
    0xE0, 0x20, 0x20, 0xE0, 0xC0, 0xA0, 0x20, 0x60, 0xC0, 0xFF, 0x80, 0x80, 0xFF, 0x00, 0xFF, 0x80, 0x80, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 110
    0x80, 0x40, 0x20, 0xA0, 0xA0, 0xA0, 0x20, 0x40, 0x80, 0x3F, 0x40, 0x80, 0xBF, 0xA0, 0xBF, 0x80, 0x40, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 111
    0xE0, 0x20, 0x20, 0xE0, 0xC0, 0xA0, 0x20, 0x60, 0x80, 0xFF, 0x00, 0x00, 0xFF, 0xA0, 0xBF, 0x80, 0xC0, 0x7F, 0x78, 0x40, 0x40, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, // 112
    0x80, 0x60, 0x20, 0xA0, 0xC0, 0xE0, 0x20, 0x20, 0xE0, 0x7F, 0xC0, 0x80, 0xBF, 0xA0, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x40, 0x40, 0x78, // 113
    0xE0, 0x20, 0x20, 0xE0, 0x40, 0xE0, 0xFF, 0x80, 0x80, 0xFF, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 114
    0xC0, 0x60, 0x20, 0xA0, 0xA0, 0x20, 0x60, 0xC0, 0x39, 0x4A, 0x8C, 0xBF, 0xBD, 0x85, 0x49, 0x71, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 115
    0xE0, 0xBC, 0x04, 0x04, 0xBC, 0x00, 0x7F, 0x80, 0x80, 0xBF, 0x00, 0x00, 0x00, 0x00, 0x00, // 116
    0xE0, 0x20, 0x20, 0xE0, 0x00, 0xE0, 0x20, 0x20, 0xE0, 0x7F, 0xC0, 0x80, 0xBF, 0xA0, 0xFF, 0x80, 0x80, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 117
    0xE0, 0x20, 0xE0, 0x00, 0xC0, 0x20, 0xA0, 0x60, 0x00, 0x1F, 0x61, 0x96, 0x8F, 0x78, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 118
    0xE0, 0x20, 0xE0, 0x00, 0x00, 0xE0, 0x20, 0xE0, 0x00, 0xC0, 0x20, 0xA0, 0x60, 0x00, 0x0F, 0x70, 0x93, 0x8F, 0xFE, 0x0E, 0x71, 0x9E, 0x87, 0xF8, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 119
    0x60, 0xA0, 0x60, 0x80, 0xC0, 0x20, 0xE0, 0x20, 0xC0, 0xB1, 0xCE, 0x31, 0x64, 0x9B, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 120
    0xE0, 0x60, 0x80, 0x00, 0xC0, 0x20, 0xA0, 0x60, 0x01, 0x3E, 0xC7, 0x38, 0xC7, 0x3C, 0x03, 0x00, 0x00, 0x70, 0x58, 0x60, 0x18, 0x00, 0x00, 0x00, // 121
    0xE0, 0xA0, 0xA0, 0xA0, 0xA0, 0xA0, 0x60, 0xE0, 0x98, 0xD6, 0xA9, 0xA6, 0xA1, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 122
    0x00, 0x00, 0x00, 0xF8, 0x0C, 0x04, 0x04, 0x08, 0x08, 0x14, 0xF3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x60, 0x40, 0x40, // 123
    0xFE, 0xFF, 0xF8, // 124
    0x04, 0x04, 0x0C, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF3, 0x14, 0x08, 0x08, 0x40, 0x40, 0x40, 0x38, 0x00, 0x00, 0x00, // 125
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x02, 0x01, 0x01, 0x01, 0x02, 0x02, 0x04, 0x04, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 126
    0xFC, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xFC, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x78, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x78 // 127
    
};

#endif