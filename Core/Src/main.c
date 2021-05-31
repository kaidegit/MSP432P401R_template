//
// Created by kai on 2021/4/4.
//

#include "main.h"
#include "gpio.h"
#include "wdt_a.h"

int main(){
    int i;
    WDT_A_hold(WDT_A_BASE);
    GPIO_setAsOutputPin(GPIO_PORT_P1,GPIO_PIN0);

    while(1){
        GPIO_toggleOutputOnPin(GPIO_PORT_P1,GPIO_PIN0);
        for (i = 10000; i > 0; i--);
    }
}