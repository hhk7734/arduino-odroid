/*
 * MIT License
 *
 * Copyright (c) 2020 Hyeonki Hong <hhk7734@gmail.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#pragma once

#include <stdint.h>

void wiringpi_setup();
void wiringpi_pinMode(int pinNumber, int pinMode);

void wiringpi_digitalWrite(int pinNumber, int status);
int  wiringpi_digitalRead(int pinNumber);

int wiringpi_analogRead(int pinNumber);

unsigned long wiringpi_pulseIn(int pin, uint8_t state, unsigned long timeout);
unsigned long
    wiringpi_pulseInLong(int pin, uint8_t state, unsigned long timeout);

void wiringpi_shiftOut(int dataPin, int clockPin, int bitOrder, uint8_t val);
int  wiringpi_shiftIn(int dataPin, int clockPin, int bitOrder);

void wiringpi_attachInterrupt(int interruptNumber,
                              void (*callback)(void),
                              int mode);
void wiringpi_detachInterrupt(int interruptNumber);
