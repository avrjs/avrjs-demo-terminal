/*The MIT License (MIT)

Copyright (c) 2015 Julian Ingram

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

#ifndef AVRJS_UART_H
#define AVRJS_UART_H

#include <stdlib.h>
#include <stdint.h>

#define UART0_RX_BUFFER_WIDTH 64
#define UART0_TX_BUFFER_WIDTH 64

extern volatile unsigned char uart0_rx_ovf_flag;

size_t uart0_rx(uint8_t *const buffer, const size_t size);
size_t uart0_tx(const uint8_t *const data, const size_t size);
void uart0_init(uint16_t brr);
void uart0_destroy(void);

void printf_init(void);

#endif