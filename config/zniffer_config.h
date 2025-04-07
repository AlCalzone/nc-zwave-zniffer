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

// USART0 TX on PA08
#ifndef ZNIFFER_TX_PORT                         
#define ZNIFFER_TX_PORT                          SL_GPIO_PORT_A
#endif
#ifndef ZNIFFER_TX_PIN                          
#define ZNIFFER_TX_PIN                           8
#endif

// USART0 RX on PA07
#ifndef ZNIFFER_RX_PORT                         
#define ZNIFFER_RX_PORT                          SL_GPIO_PORT_A
#endif
#ifndef ZNIFFER_RX_PIN                          
#define ZNIFFER_RX_PIN                           7
#endif
// [USART_ZNIFFER]$

// <<< sl:end pin_tool >>>

#endif // ZNIFFER_CONFIG_H
