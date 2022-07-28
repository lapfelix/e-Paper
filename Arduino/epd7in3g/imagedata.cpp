/**
 *  @filename   :   imagedata.cpp
 *  @brief      :   data file for epd demo
 *
 *  Copyright (C) Waveshare     2022/7/22
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documnetation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to  whom the Software is
 * furished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS OR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "imagedata.h"
#include <avr/pgmspace.h>

const unsigned char IMAGE_DATA[] PROGMEM = {
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x40,0x00,0x01,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x00,0x00,0x00,0x00,0x01,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x54,0x40,0x00,0x00,0x45,0x55,0x55,0x55,0x40,0x00,
0x00,0x00,0x00,0x00,0x15,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x50,
0x00,0x00,0x00,0x00,0x00,0x05,0x55,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x55,
0x54,0x00,0x00,0x01,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x40,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x55,0x55,0x55,0x50,0x00,0x00,0x15,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x00,0x00,0x00,0x01,0x15,0x55,0x55,0x10,0x00,0x00,0x00,
0x01,0x55,0x55,0x55,0x55,0x55,0x00,0x00,0x05,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x50,0x00,
0x00,0x01,0x55,0x55,0x55,0x55,0x55,0x54,0x00,0x00,0x15,0x55,0x55,0x55,0x55,0x55,
0x50,0x00,0x01,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x40,0x00,0x01,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x50,0x00,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x00,0x00,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x00,0x00,0x15,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x41,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x40,0x00,0x05,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x54,0x00,0x01,0x55,0x55,
0x56,0x6A,0xAA,0xAA,0x65,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x54,
0x00,0x01,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x50,0x00,0x15,0x55,0x56,0xAA,0xAA,0xAA,0xAA,0xAA,0xA5,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x00,0x00,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x40,
0x00,0x55,0x55,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0x95,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x40,0x00,0x15,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x00,0x01,0x55,0x5A,0xAA,0xAA,0xAA,
0xAA,0xAA,0xAA,0xAA,0xAA,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x54,0x00,
0x05,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x54,0x00,0x05,0x55,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0x95,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x00,0x01,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x50,0x00,0x15,0x5A,
0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x40,0x01,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x50,0x00,0x55,0x6A,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,
0xAA,0xAA,0xAA,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x50,0x00,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x40,0x01,0x55,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x50,0x00,0x15,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x40,0x05,0x56,0xAA,0xAA,0xAA,
0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x54,0x00,0x05,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x00,0x05,0x56,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,
0xAA,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x00,0x01,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x00,0x15,
0x5A,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x40,0x01,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x54,0x00,0x15,0x6A,0xAA,0xAA,0xAA,0xAA,0xAA,
0xAA,0xAA,0xAA,0xAA,0xAA,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x50,0x00,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x54,0x00,0x55,0x6A,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x54,0x00,0x15,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x54,0x00,0x55,0xAA,0xAA,
0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x54,0x00,0x15,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x54,0x00,0x55,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,
0xAA,0xAA,0xAA,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x00,
0x05,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x54,
0x00,0x55,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0x95,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x00,0x05,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x40,0x01,0x56,0xAA,0xAA,0xAA,0xAA,
0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0x95,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x40,0x01,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x00,0x00,0x55,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,
0xAA,0x95,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x50,0x01,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x50,0x00,0x00,0x55,
0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0x95,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x50,0x00,0x00,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x00,0x00,0x01,0x55,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,
0xAA,0xAA,0xAA,0xAA,0xAA,0x95,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x54,0x00,0x00,0x05,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x54,
0x00,0x00,0x15,0x55,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0x95,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x54,0x00,0x00,0x00,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x40,0x00,0x01,0x55,0x55,0x6A,0xAA,
0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xA5,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x54,0x00,0x00,0x00,0x05,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x00,0x00,0x15,0x55,0x55,0x6A,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,
0xAA,0xAA,0xAA,0xA5,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x04,0x00,0x00,0x01,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x54,0x00,0x01,0x55,
0x55,0xD5,0x5A,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xA5,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x54,0x00,0x00,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x50,0x00,0x05,0x55,0x5F,0xF5,0x56,0xAA,0xAA,0xAA,
0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xA5,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x40,0x00,0x05,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x40,0x00,0x55,0x55,0xFF,0xFD,0x55,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,
0xAA,0xA5,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x54,0x00,0x01,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x00,0x01,0x55,0x5F,0xFF,0xFD,
0x55,0x6A,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xA9,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x51,0x55,0x55,0x00,0x01,0x55,0x55,0x55,
0x55,0x55,0x55,0x54,0x00,0x05,0x55,0xFF,0xFF,0xFF,0x55,0x5A,0xAA,0xAA,0xAA,0xAA,
0xAA,0xAA,0xAA,0xAA,0xAA,0xA5,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x50,0x00,0x05,0x55,0x40,0x00,0x55,0x55,0x55,0x55,0x55,0x55,0x50,0x00,0x15,
0x57,0xFF,0xFF,0xFF,0xD5,0x55,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xA9,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x00,0x00,0x00,0x55,0x54,
0x00,0x15,0x55,0x55,0x55,0x55,0x55,0x40,0x00,0x55,0x5F,0xFF,0xFF,0xFF,0xF5,0x55,
0x6A,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xA9,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x54,0x00,0x00,0x00,0x05,0x55,0x00,0x05,0x55,0x55,0x55,0x55,
0x55,0x00,0x01,0x55,0xFF,0xFF,0xFF,0xFF,0xFF,0x55,0x56,0xAA,0xAA,0xAA,0xAA,0xAA,
0xAA,0xAA,0xAA,0xA9,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x50,0x00,
0x00,0x00,0x01,0x55,0x00,0x01,0x55,0x55,0x55,0x55,0x54,0x00,0x05,0x57,0xFF,0xFF,
0xFF,0xFF,0xFF,0xD5,0x55,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xA9,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x40,0x00,0x00,0x00,0x00,0x55,0x40,0x01,
0x55,0x55,0x55,0x55,0x50,0x00,0x15,0x5F,0xFF,0xFF,0xFF,0xFF,0xFF,0xF5,0x55,0x5A,
0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xA9,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x00,0x00,0x00,0x00,0x00,0x15,0x50,0x00,0x55,0x55,0x55,0x55,0x40,0x00,
0x55,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x55,0x56,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,
0xAA,0xA9,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x00,0x00,0x00,0x00,
0x00,0x05,0x54,0x00,0x55,0x55,0x55,0x55,0x40,0x01,0x55,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xF5,0x55,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xA9,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x54,0x00,0x00,0x00,0x00,0x00,0x05,0x54,0x00,0x15,0x55,
0x55,0x55,0x00,0x05,0x57,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0x55,0x5A,0xAA,
0xAA,0xAA,0xAA,0xAA,0xAA,0xA9,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x50,
0x00,0x00,0x00,0x00,0x00,0x01,0x55,0x00,0x15,0x55,0x55,0x54,0x00,0x15,0x57,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x55,0x56,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xA9,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x50,0x00,0x00,0x00,0x00,0x00,0x00,
0x55,0x00,0x15,0x55,0x55,0x54,0x00,0x15,0x5F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xF5,0x55,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xA9,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0x00,0x05,0x55,0x55,0x50,
0x00,0x55,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0x55,0x6A,0xAA,0xAA,
0xAA,0xAA,0xAA,0xA9,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x15,0x40,0x05,0x55,0x55,0x50,0x01,0x55,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x55,0x5A,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x40,
0x05,0x55,0x55,0x40,0x01,0x55,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xD5,0x56,0xAA,0xAA,0xAA,0xAA,0xAA,0xA9,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x40,0x01,0x55,0x55,0x40,0x05,0x57,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0x55,0x6A,0xAA,0xAA,0xAA,
0xAA,0xA9,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x50,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x05,0x50,0x01,0x55,0x55,0x00,0x05,0x5F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0x55,0x5A,0xAA,0xAA,0xAA,0xAA,0xAA,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x50,0x01,0x55,
0x55,0x00,0x15,0x5F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xD5,
0x56,0xAA,0xAA,0xAA,0xAA,0xA9,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x40,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x50,0x01,0x55,0x54,0x00,0x15,0x7F,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF5,0x55,0xAA,0xAA,0xAA,0xAA,0xAA,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x05,0x50,0x01,0x55,0x54,0x00,0x55,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFD,0x55,0x6A,0xAA,0xAA,0xAA,0xA9,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x54,0x00,0x55,0x54,0x00,
0x55,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x55,0x5A,
0xAA,0xAA,0xAA,0xAA,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x50,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x54,0x00,0x55,0x54,0x00,0x55,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xD5,0x56,0xAA,0xAA,0xAA,0xA9,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x54,
0x00,0x55,0x50,0x01,0x55,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xF5,0x55,0xAA,0xAA,0xAA,0xA9,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x40,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x54,0x00,0x55,0x50,0x01,0x57,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0x55,0x6A,0xAA,
0xAA,0xAA,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0x54,0x00,0x55,0x50,0x01,0x57,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x55,0x5A,0xAA,0xAA,0xA9,0x55,0x55,0x55,0x55,
0x55,0x55,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x54,0x00,0x55,
0x50,0x01,0x57,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xD5,0x56,0xAA,0xAA,0xA9,0x55,0x55,0x55,0x55,0x55,0x55,0x50,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x54,0x00,0x55,0x50,0x01,0x57,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF5,0x55,0xAA,0xAA,0xA9,
0x55,0x55,0x55,0x55,0x55,0x55,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x54,0x00,0x55,0x50,0x01,0x57,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0x55,0xAA,0xAA,0xA9,0x55,0x55,0x55,0x55,0x55,0x55,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x54,0x00,0x55,0x50,0x01,
0x57,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0x55,0x6A,0xAA,0xA9,0x55,0x55,0x55,0x55,0x55,0x54,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x54,0x00,0x55,0x50,0x01,0x57,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xD5,0x5A,0xAA,0xA9,0x55,0x55,
0x55,0x55,0x55,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x54,
0x00,0x55,0x50,0x01,0x57,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF5,0x56,0xAA,0xA9,0x55,0x55,0x55,0x55,0x55,0x40,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x54,0x00,0x55,0x50,0x01,0x57,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0x55,
0xAA,0xA9,0x55,0x55,0x55,0x55,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0x54,0x00,0x55,0x50,0x01,0x55,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0x55,0xAA,0xA5,0x55,0x55,0x55,0x55,
0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x54,0x00,0x55,
0x54,0x00,0x55,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0x55,0x6A,0xA5,0x55,0x55,0x55,0x55,0x50,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x54,0x00,0x55,0x54,0x00,0x55,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xD5,0x5A,0xA5,
0x55,0x55,0x55,0x55,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x54,0x00,0x55,0x54,0x00,0x55,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF5,0x56,0xA5,0x55,0x55,0x55,0x55,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x50,0x01,0x55,0x54,0x00,
0x15,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xF5,0x55,0xA5,0x55,0x55,0x55,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x05,0x54,0x00,0x55,0x55,0x00,0x15,0x5F,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0x55,0x55,0x55,0x55,
0x55,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x50,
0x01,0x55,0x55,0x00,0x05,0x5F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xDD,0x55,0x55,0x55,
0x55,0x55,0x55,0x5F,0xFF,0xFD,0x55,0x55,0x55,0x55,0x55,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x50,0x01,0x55,0x55,0x00,0x05,0x55,
0xFF,0xFF,0xFF,0xFF,0xFD,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x05,0x50,0x01,0x55,0x55,0x40,0x01,0x55,0x5F,0xFF,0xFF,0xF5,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x50,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x40,0x05,0x55,
0x55,0x40,0x00,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x50,0x01,0x55,0x55,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x40,0x05,0x55,0x55,0x50,0x00,0x15,0x55,0x55,
0x55,0x55,0x55,0x55,0x44,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x55,0x55,0x40,0x01,
0x55,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x15,0x40,0x05,0x55,0x55,0x54,0x00,0x15,0x55,0x55,0x55,0x55,0x54,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0x00,0x00,0x55,0x50,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0x40,0x05,0x55,0x55,0x54,
0x00,0x55,0x55,0x55,0x55,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x55,0x00,0x00,0x55,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x55,0x00,0x15,0x55,0x55,0x54,0x00,0x55,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x55,0x00,0x00,0x55,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x55,0x00,
0x15,0x55,0x55,0x50,0x00,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x55,0x00,0x00,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x54,0x00,0x15,0x55,0x55,0x50,0x01,0x55,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x55,
0x40,0x00,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x05,0x54,0x00,0x05,0x55,0x55,0x50,0x01,0x54,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0x55,0x40,0x05,0x55,0x40,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x55,0x00,0x01,0x55,
0x55,0x50,0x01,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0x55,0x55,0x55,0x55,0x55,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x15,0x55,0x40,0x01,0x55,0x55,0x40,0x05,0x54,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x55,0x55,0x55,0x55,
0x55,0x55,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x55,
0x55,0x50,0x00,0x55,0x55,0x40,0x05,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x55,0x55,0x55,0x55,0x55,0x75,0x55,0x55,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x55,0xD5,0x54,0x00,0x55,0x55,0x40,
0x05,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x55,
0x55,0x55,0x55,0x55,0x7F,0x55,0x55,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x05,0x55,0xF5,0x54,0x00,0x15,0x55,0x40,0x05,0x50,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x55,0x55,0x55,0x5A,0x55,0x5F,0xD5,
0x55,0x55,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x57,0xFD,0x55,
0x00,0x15,0x55,0x40,0x05,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x55,0x55,0x55,0x55,0x5A,0x95,0x5F,0xFF,0x55,0x55,0x55,0x54,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x55,0x5F,0xFF,0x55,0x00,0x15,0x55,0x00,0x15,0x50,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0x55,0x55,0x55,
0x5A,0xA5,0x57,0xFF,0xFF,0x55,0x55,0x55,0x55,0x40,0x00,0x00,0x00,0x00,0x00,0x15,
0x55,0x7F,0xFF,0x55,0x00,0x15,0x55,0x40,0x05,0x40,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x05,0x55,0x55,0x55,0x55,0x5A,0xA9,0x55,0xFF,0xFF,0xFD,
0x55,0x55,0x55,0x55,0x51,0x00,0x00,0x00,0x05,0x55,0x55,0xFF,0xFF,0x55,0x40,0x05,
0x55,0x00,0x15,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,
0x55,0x55,0x55,0x55,0x5A,0xAA,0x55,0x7F,0xFF,0xFF,0xFD,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x5F,0xFF,0xFF,0xD5,0x40,0x05,0x55,0x00,0x15,0x40,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0x55,0x55,0x55,0x55,0x6A,0xAA,
0x55,0x7F,0xFF,0xFF,0xFF,0xFD,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x7F,0xFF,
0xFF,0xD5,0x40,0x05,0x55,0x00,0x15,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0x55,0x55,0x55,0x55,0x55,0x5A,0xAA,0x95,0x5F,0xFF,0xFF,0xFF,0xFF,
0xFF,0x55,0x55,0x55,0x55,0x55,0x55,0x5F,0xFF,0xFF,0xFF,0xD5,0x40,0x05,0x55,0x00,
0x15,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x55,0x55,0x55,
0x55,0x55,0x6A,0xAA,0xA5,0x57,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0x55,0x55,0x55,
0x5F,0xFF,0xFF,0xFF,0xFF,0xD5,0x40,0x05,0x55,0x00,0x15,0x40,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x55,0x55,0x55,0x55,0x55,0x6A,0xAA,0xA9,0x55,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xD5,
0x40,0x05,0x55,0x00,0x15,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x15,0x55,0x55,0x55,0x55,0x55,0x6A,0xAA,0xAA,0x55,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xD5,0x40,0x05,0x55,0x00,0x15,0x40,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x55,0x55,0x55,0x55,0x55,0x55,
0x6A,0xAA,0xAA,0x55,0x5F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xD5,0x40,0x05,0x55,0x00,0x15,0x40,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x55,0x55,0x55,0x55,0x55,0x55,0x6A,0xAA,0xAA,0x95,0x57,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xD5,0x40,0x05,
0x55,0x00,0x15,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x55,0x55,
0x55,0x55,0x55,0x55,0x6A,0xAA,0xAA,0xA5,0x55,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xD5,0x40,0x05,0x55,0x00,0x15,0x40,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x55,0x55,0x55,0x55,0x55,0x55,0x6A,0xAA,
0xAA,0xA9,0x55,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xD5,0x40,0x05,0x55,0x00,0x15,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x6A,0xAA,0xAA,0xAA,0x55,0x5F,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xD5,0x40,0x05,0x55,0x00,
0x15,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x6A,0xAA,0xAA,0xAA,0x95,0x57,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0x55,0x00,0x15,0x55,0x40,0x05,0x50,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x05,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x6A,0xAA,0xAA,0xAA,
0xA5,0x55,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x55,
0x00,0x15,0x55,0x00,0x15,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x6A,0xAA,0xAA,0xAA,0xA9,0x55,0x7F,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x55,0x00,0x15,0x55,0x40,0x05,0x50,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x6A,0xAA,0xAA,0xAA,0xAA,0x55,0x5F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFD,0x54,0x00,0x15,0x55,0x40,0x05,0x50,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x6A,0xAA,0xAA,0xAA,0xAA,0x95,
0x57,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0x54,0x00,0x55,
0x55,0x40,0x05,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x6A,0xAA,0xAA,0xAA,0xAA,0xA5,0x55,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF5,0x54,0x00,0x55,0x55,0x40,0x05,0x54,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x05,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x6A,0xAA,
0xAA,0xAA,0xAA,0xA9,0x55,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xD5,0x50,0x00,0x55,0x55,0x50,0x01,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x6A,0xAA,0xAA,0xAA,0xAA,0xAA,0x55,0x57,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xD5,0x50,0x01,0x55,0x55,0x50,
0x01,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x6A,0xAA,0xAA,0xAA,0xAA,0xAA,0xA5,0x55,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0x55,0x40,0x01,0x55,0x55,0x50,0x01,0x55,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x6A,0xAA,0xAA,0xAA,
0xAA,0xAA,0xA9,0x55,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0x55,0x00,
0x05,0x55,0x55,0x50,0x00,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x6A,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0x55,0x5F,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0x55,0x00,0x05,0x55,0x55,0x54,0x00,0x55,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x6A,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0x95,0x55,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xF5,0x54,0x00,0x15,0x55,0x55,0x54,0x00,0x55,0x40,0x00,0x00,0x00,0x00,0x00,
0x05,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x6A,0xAA,0xAA,0xAA,0xAA,0xAA,
0xAA,0xA5,0x55,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xD5,0x50,0x00,0x55,0x55,
0x55,0x54,0x00,0x15,0x50,0x00,0x00,0x00,0x00,0x00,0x05,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x6A,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0x55,0x5F,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0x55,0x40,0x00,0x55,0x55,0x55,0x55,0x00,0x05,0x50,0x00,
0x00,0x00,0x00,0x00,0x15,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x6A,0xAA,
0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0x95,0x55,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0x55,
0x40,0x01,0x55,0x55,0x55,0x55,0x00,0x05,0x54,0x00,0x00,0x00,0x00,0x00,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x6A,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,
0xA5,0x55,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xF5,0x55,0x00,0x05,0x55,0x55,0x55,0x55,
0x40,0x01,0x55,0x00,0x00,0x00,0x00,0x01,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x6A,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0x55,0x57,0xFF,0xFF,0xFF,
0xFF,0xFF,0xD5,0x54,0x00,0x05,0x55,0x55,0x55,0x55,0x40,0x01,0x55,0x40,0x00,0x00,
0x00,0x05,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x6A,0xAA,0xAA,0xAA,
0xAA,0xAA,0xAA,0xAA,0xAA,0x95,0x55,0xFF,0xFF,0xFF,0xFF,0xFF,0x55,0x50,0x00,0x15,
0x55,0x55,0x55,0x55,0x50,0x00,0x55,0x50,0x00,0x00,0x00,0x15,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x5A,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xA9,
0x55,0x7F,0xFF,0xFF,0xFF,0xFD,0x55,0x40,0x00,0x55,0x55,0x55,0x55,0x55,0x54,0x00,
0x15,0x55,0x00,0x00,0x00,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x6A,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0x55,0x57,0xFF,0xFF,0xFF,0xD5,
0x55,0x00,0x01,0x55,0x55,0x55,0x55,0x55,0x54,0x00,0x01,0x55,0x50,0x00,0x05,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x5A,0xAA,0xAA,0xAA,0xAA,0xAA,
0xAA,0xAA,0xAA,0xAA,0xA5,0x55,0xFF,0xFF,0xFF,0x55,0x54,0x00,0x05,0x55,0x55,0x55,
0x55,0x55,0x55,0x00,0x00,0x55,0x55,0x01,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x5A,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xA9,0x55,
0x7F,0xFF,0xFD,0x55,0x40,0x00,0x15,0x55,0x55,0x55,0x55,0x55,0x55,0x40,0x00,0x15,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x5A,0xAA,
0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0x55,0x7F,0xFF,0xD5,0x55,0x00,0x00,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x50,0x00,0x01,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x5A,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,
0xAA,0xAA,0xAA,0x95,0x5F,0xFD,0x55,0x54,0x00,0x01,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x00,0x00,0x15,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x5A,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xA5,0x57,0xD5,
0x55,0x40,0x00,0x05,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x40,0x00,0x00,0x54,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x5A,0xAA,0xAA,0xAA,
0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xA9,0x55,0x55,0x55,0x00,0x00,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x50,0x00,0x00,0x00,0x15,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x56,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,
0xAA,0xA9,0x55,0x55,0x50,0x00,0x01,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x54,0x00,0x00,0x00,0x15,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x56,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0x55,0x55,0x00,0x00,
0x05,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x40,0x00,0x00,0x05,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x56,0xAA,0xAA,0xAA,0xAA,0xAA,
0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0x55,0x50,0x00,0x00,0x15,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x00,0x00,0x05,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x56,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,
0x95,0x00,0x00,0x01,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x00,0x05,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x56,0xAA,
0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0x95,0x40,0x00,0x15,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x40,0x01,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,
0xAA,0xAA,0xAA,0xAA,0x55,0x40,0x01,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x50,0x00,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0x95,0x00,
0x05,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x50,
0x00,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0xAA,0xAA,0xAA,
0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0x55,0x40,0x15,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x54,0x00,0x15,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,
0xAA,0xAA,0x55,0x00,0x15,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x54,0x00,0x15,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0x55,0x00,0x15,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x00,0x05,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0xAA,0xAA,0xAA,0xAA,0xAA,
0xAA,0xAA,0xAA,0xAA,0xAA,0xA9,0x54,0x00,0x15,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x40,0x01,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xA5,
0x54,0x00,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x40,0x00,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0xAA,
0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xA5,0x54,0x00,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x50,0x00,0x15,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,
0xAA,0xAA,0xAA,0x95,0x50,0x00,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x54,0x00,0x15,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0x55,0x40,0x01,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x00,0x05,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0xAA,0xAA,0xAA,
0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xA9,0x55,0x40,0x01,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x40,0x01,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,
0xA5,0x55,0x00,0x05,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x40,0x00,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0x95,0x54,0x00,0x15,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x50,
0x00,0x15,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0xAA,0xAA,0xAA,0xAA,0xAA,
0xAA,0xAA,0xAA,0xA9,0x55,0x50,0x00,0x15,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x54,0x00,0x01,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x5A,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0x95,0x55,0x40,
0x00,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x00,0x00,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x6A,0xAA,0xAA,0xAA,0xAA,0xAA,0xA5,0x55,0x54,0x00,0x01,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x40,0x00,
0x15,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x5A,0xAA,0xAA,0xAA,0xA5,
0x55,0x55,0x50,0x00,0x05,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x50,0x00,0x05,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x41,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x00,0x00,0x15,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x00,0x00,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x00,0x15,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x50,0x00,0x00,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x40,0x00,0x05,
0x55,0x55,0x55,0x55,0x55,0x54,0x00,0x00,0x55,0x55,0x55,0x55,0x55,0x55,0x50,0x00,
0x00,0x05,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x50,0x00,0x00,0x55,0x55,0x55,0x55,0x55,0x50,
0x00,0x00,0x00,0x05,0x55,0x55,0x55,0x44,0x00,0x00,0x00,0x15,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x54,0x00,0x00,0x05,0x55,0x55,0x55,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x40,0x00,0x00,0x15,
0x55,0x55,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x40,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x55,0x40,0x00,0x00,0x00,0x00,0x00,
0x01,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x50,0x00,0x00,0x00,0x00,
0x00,0x01,0x55,0x55,0x55,0x50,0x00,0x00,0x00,0x01,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x40,0x00,0x00,0x00,0x00,0x15,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x00,0x00,0x00,0x15,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
};