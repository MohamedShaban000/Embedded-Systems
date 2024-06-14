/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
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

#include <stdint.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

#include "gpio.h"
#include "keypad.h"
#include "lcd.h"
#include "EXTI.h"


//void GPIO_init(){
//
//	GPIO_PinConfig_t pinconfig;
//
//	//MODE: init GPIOA pin 1 as input(reset state)
//	//CNF: make PORTA pin 1 as floating input
//	pinconfig.GPIO_PINNumber = GPIO_PIN1;
//	pinconfig.GPIO_Mode = GPIO_Mode_IN_Float;
//	MCAL_GPIO_init (GPIOA,&pinconfig);
//
//
//	//MODE: init GPIOB pin 1 as output with max speed = 10MHZ
//	//CNF: make PORTB pin 1 as push-pull output
//	pinconfig.GPIO_PINNumber = GPIO_PIN1;
//	pinconfig.GPIO_Mode = GPIO_Mode_OUT_PP;
//	pinconfig.GPIO_Speed = GPIO_Speed_10MHZ;
//	MCAL_GPIO_init (GPIOB,&pinconfig);
//
//	/************************************************************/
//
//	//MODE: init GPIOA pin 13 as input(reset state)
//	//CNF: make PORTA pin 13 as floating input
//	pinconfig.GPIO_PINNumber = GPIO_PIN13;
//	pinconfig.GPIO_Mode = GPIO_Mode_IN_Float;
//	MCAL_GPIO_init (GPIOA,&pinconfig);
//
//	//MODE: init GPIOB pin 13 as output with max speed = 10MHZ
//	//CNF: make PORTB pin 13 as push-pull output
//	pinconfig.GPIO_PINNumber = GPIO_PIN13;
//	pinconfig.GPIO_Mode = GPIO_Mode_OUT_PP;
//	pinconfig.GPIO_Speed = GPIO_Speed_10MHZ;
//	MCAL_GPIO_init (GPIOB,&pinconfig);
//
//}

uint8_t IRQ_Flag = 0;


void clock_init(){
	//enable ABP2 clock register
	//enable IO port A clock
	 RCC_GPIOA_CLOCK_EN();

	//enable IO port B clock
	 RCC_GPIOB_CLOCK_EN();
	 RCC_AFIO_CLOCK_EN();
}

void IRQ9_CallBack(void){
	LCD_clear_screen();
	IRQ_Flag = 1;
	LCD_WRITE_STRING("EXTI9 happened!!");
	delay_ms(1000);

}



int main(void)
{
	clock_init();
	//GPIO_init();
	LCD_INIT();
	//Configure an External interrupt request of line 9 on PORT B pin 9
	EXTI_PinConfig_t EXTI_Config;
	EXTI_Config.EXTI_Pin = EXTI9PB9 ;
	EXTI_Config.triggerState = triggerState_Rising;
	EXTI_Config.ptr_IRQ_CallBack = IRQ9_CallBack;
	EXTI_Config.EXTI_State = EXTI_Enable;
	MCAL_EXTI_Init(&EXTI_Config);
	IRQ_Flag = 1;
    /* Loop forever */
	while(1){
		if (IRQ_Flag){
				LCD_clear_screen();
				IRQ_Flag = 0;
			}








//		//mask Port A pin 1 input register
//		if(MCAL_GPIO_ReadPIN(GPIOA,GPIO_PIN1)==0)
//		{
//			MCAL_GPIO_TogglePIN(GPIOB,GPIO_PIN1); 	//toggle led on pin 1 PortB
//			while((MCAL_GPIO_ReadPIN(GPIOA,GPIO_PIN1))==0); //single pressing
//		}
//		//mask Port A pin 13 input register
//		if(MCAL_GPIO_ReadPIN(GPIOA,GPIO_PIN13)==1)
//		{
//			//"multi pressing" toggle led on pin 13 PortB
//			MCAL_GPIO_TogglePIN(GPIOB,GPIO_PIN13);
//			WAIT_ms(3);
//
//		}
	}
}