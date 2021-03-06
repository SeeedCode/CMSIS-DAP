/* CMSIS-DAP Interface Firmware
 * Copyright (c) 2009-2013 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef USB_BUF_H
#define USB_BUF_H


#include <stdint.h>

/* "absacc.h" defines __at(addr) for __attribute__((at(addr))) as shown below, and the file is deprecated */
#define __at(_addr) __attribute__ ((at(_addr)))

uint32_t usb_buffer[FLASH_SECTOR_SIZE/2];// __at(0x20000000);

#endif
