/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Mohamed Shaban
 * @brief          : Toggle Led
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include "Platform_Data_Types.h"


//RCC
#define RCC_BASE 	(0x40021000)
#define APB2ENR  	*((vuint32* )(RCC_BASE + 0x18))

//GPIO
#define GPIOPA_BASE (0x40010800)
#define CRH  		*((vuint32* )(GPIOPA_BASE + 0x04))
//First SOlution
//#define ODR  		*((vuint32* )(GPIOPA_BASE + 0x0c))


//Second Solution
typedef union{
	vuint32 all_fields;
	struct{
	vuint32 reserved:13;
	vuint32 pin13:1;
	}PIN;
}ODR;
volatile ODR* ODR_Reg_ptr = (volatile ODR*)(GPIOPA_BASE +0X0C);



int main(void)
{

	int i;
	APB2ENR |= (1<<2);
	CRH &= 0xff0fffff;
	CRH |= 0x00200000;
	while(1)
	{
		//First Solution
		/*
		ODR |= (1<<13);
		for(i=0;i<100000;i++);
		ODR &= ~(1<<13);
		for(i=0;i<100000;i++);
		*/

		//Second Solution
		ODR_Reg_ptr->PIN.pin13 = 1;
		for(i=0;i<100000;i++);
		ODR_Reg_ptr->PIN.pin13 = 0;
		for(i=0;i<100000;i++);
	}

}
