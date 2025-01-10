/**
 * @file
 * Zniffer Configuration
 * @copyright 2022 Silicon Laboratories Inc.
 */
#ifndef ZNIFFER_CONFIG_H
#define ZNIFFER_CONFIG_H

#include <em_gpio.h>

// <<< sl:start pin_tool >>>

// <usart signal=TX,RX> ZNIFFER

// $[USART_ZNIFFER]
#ifndef ZNIFFER_PERIPHERAL                      
#define ZNIFFER_PERIPHERAL                       USART0
#endif
#ifndef ZNIFFER_PERIPHERAL_NO                   
#define ZNIFFER_PERIPHERAL_NO                    0
#endif

// [USART_ZNIFFER]$

// <<< sl:end pin_tool >>>

#endif // ZNIFFER_CONFIG_H
