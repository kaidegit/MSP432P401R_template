//
// Created by kai on 2021/4/4.
//


#include <msp432p4xx/driverlib/gpio.h>
#include "main.h"
#include "uart.h"
#include "msp432p4xx/driverlib/cs.h"

int main() {
    int i;
    GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN0);
    MY_UART_Init();

    while (1) {
        GPIO_toggleOutputOnPin(GPIO_PORT_P1, GPIO_PIN0);
        UART_transmitData(EUSCI_A0_BASE, '1');
        for (i = 0; i < 500000; i++) {}
    }
}