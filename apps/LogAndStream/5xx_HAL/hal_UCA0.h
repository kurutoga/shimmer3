/*
 * hal_UCA0.h
 *
 *  Created on: 19 Jun 2014
 *      Author: WeiboP
 */

#ifndef HAL_UCA0_H_
#define HAL_UCA0_H_

#include <stdint.h>

// run this only once in init() if using any mode of uca0
extern void UCA0_isrInit();

// run this only once in init() for any driver if they are using any mode of uca0
extern uint8_t UCA0_isrRegister(void (*rx_isr)(void), uint8_t rx_exit_lpm, void (*tx_isr)(void), uint8_t tx_exit_lpm);

// run this every time the driver wants to take charge of uca0
extern void UCA0_isrActivate(uint8_t isr);




#endif /* HAL_UCA0_H_ */
