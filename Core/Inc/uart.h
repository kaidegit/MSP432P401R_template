//
// Created by kai on 2021/5/31.
//

#ifndef MSP432P401R_UART_H
#define MSP432P401R_UART_H

#include "msp432p4xx/driverlib/uart.h"

void MY_UART_Init();

void uart_baud_calc(eUSCI_UART_ConfigV1 *uart_cfg, float clk_val, float baud);

#endif //MSP432P401R_UART_H
