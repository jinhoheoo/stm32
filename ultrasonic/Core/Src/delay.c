/*
 * delay.c
 *
 *  Created on: Nov 1, 2023
 *      Author: Administrator
 */

#include "delay.h"

void delay_us(uint16_t us)
{
  __HAL_TIM_SET_COUNTER(&htim11,0);         //지금부터 0으로 세팅
  while(__HAL_TIM_GET_COUNTER(&htim11)<us); //us 전까지 받아옴.
}

