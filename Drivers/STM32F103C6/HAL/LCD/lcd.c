/*
 * lcd.c
 *
 * Created: 4/22/2021 3:01:11 PM
 *  Author: 
 */

#include "lcd.h"

void delay_ms(uint32 time) {
	uint32 i, j;
	for (i = 0; i < time; i++)
		for (j = 0; j < 255; j++);			;
}
static GPIO_PinConfig_t PinCfg ;
void LCD_GPIO_init() {
	PinCfg.GPIO_PINNumber = RS_SWITCH;
	PinCfg.GPIO_Mode = GPIO_Mode_OUT_PP;
	PinCfg.GPIO_Speed = GPIO_Speed_10MHZ;
	MCAL_GPIO_init(LCD_CTRL, &PinCfg);

	PinCfg.GPIO_PINNumber = RW_SWITCH;
	PinCfg.GPIO_Mode = GPIO_Mode_OUT_PP;
	PinCfg.GPIO_Speed = GPIO_Speed_10MHZ;
	MCAL_GPIO_init(LCD_CTRL, &PinCfg);

	PinCfg.GPIO_PINNumber = EN_SWITCH;
	PinCfg.GPIO_Mode = GPIO_Mode_OUT_PP;
	PinCfg.GPIO_Speed = GPIO_Speed_10MHZ;
	MCAL_GPIO_init(LCD_CTRL, &PinCfg);

	//============================
	// SET THE NEXT 8 PINS AS INPUT
	PinCfg.GPIO_PINNumber = GPIO_PIN0;
	PinCfg.GPIO_Mode = GPIO_Mode_OUT_PP;
	PinCfg.GPIO_Speed = GPIO_Speed_10MHZ;
	MCAL_GPIO_init(LCD_CTRL, &PinCfg);

	PinCfg.GPIO_PINNumber = GPIO_PIN1;
	PinCfg.GPIO_Mode = GPIO_Mode_OUT_PP;
	PinCfg.GPIO_Speed = GPIO_Speed_10MHZ;
	MCAL_GPIO_init(LCD_CTRL, &PinCfg);

	PinCfg.GPIO_PINNumber = GPIO_PIN2;
	PinCfg.GPIO_Mode = GPIO_Mode_OUT_PP;
	PinCfg.GPIO_Speed = GPIO_Speed_10MHZ;
	MCAL_GPIO_init(LCD_CTRL, &PinCfg);

	PinCfg.GPIO_PINNumber = GPIO_PIN3;
	PinCfg.GPIO_Mode = GPIO_Mode_OUT_PP;
	PinCfg.GPIO_Speed = GPIO_Speed_10MHZ;
	MCAL_GPIO_init(LCD_CTRL, &PinCfg);

	PinCfg.GPIO_PINNumber = GPIO_PIN4;
	PinCfg.GPIO_Mode = GPIO_Mode_OUT_PP;
	PinCfg.GPIO_Speed = GPIO_Speed_10MHZ;
	MCAL_GPIO_init(LCD_CTRL, &PinCfg);

	PinCfg.GPIO_PINNumber = GPIO_PIN5;
	PinCfg.GPIO_Mode = GPIO_Mode_OUT_PP;
	PinCfg.GPIO_Speed = GPIO_Speed_10MHZ;
	MCAL_GPIO_init(LCD_CTRL, &PinCfg);

	PinCfg.GPIO_PINNumber = GPIO_PIN6;
	PinCfg.GPIO_Mode = GPIO_Mode_OUT_PP;
	PinCfg.GPIO_Speed = GPIO_Speed_10MHZ;
	MCAL_GPIO_init(LCD_CTRL, &PinCfg);

	PinCfg.GPIO_PINNumber = GPIO_PIN7;
	PinCfg.GPIO_Mode = GPIO_Mode_OUT_PP;
	PinCfg.GPIO_Speed = GPIO_Speed_10MHZ;
	MCAL_GPIO_init(LCD_CTRL, &PinCfg);

	//	DataDir_LCD_CTRL |= (1 << EN_SWITCH | 1 << RS_SWITCH | 1 << RW_SWITCH);
	MCAL_GPIO_WritePIN(LCD_CTRL, EN_SWITCH, GPIO_PIN_LOW);
	MCAL_GPIO_WritePIN(LCD_CTRL, RS_SWITCH, GPIO_PIN_LOW);
	MCAL_GPIO_WritePIN(LCD_CTRL, RW_SWITCH, GPIO_PIN_LOW);

}

void LCD_clear_screen() {
	LCD_WRITE_COMMAND(LCD_CLEAR_SCREEN);
}

void LCD_lcd_kick() {
	MCAL_GPIO_WritePIN(LCD_CTRL, EN_SWITCH, GPIO_PIN_HIGH);
	delay_ms(50);
	MCAL_GPIO_WritePIN(LCD_CTRL, EN_SWITCH, GPIO_PIN_LOW);
}

void LCD_GOTO_XY(uint8 line, uint8 position) {
	if (line == 1) {
		if (position < 16 && position >= 0) {
			LCD_WRITE_COMMAND(LCD_BEGIN_AT_FIRST_ROW + position);
		}
	}
	if (line == 2) {
		if (position < 16 && position >= 0) {
			LCD_WRITE_COMMAND(LCD_BEGIN_AT_SECOND_ROW + position);
		}
	}
}

void LCD_INIT() {

	delay_ms (20);
	// SET THE FIRST 3 PINS AS OUPUT
	LCD_GPIO_init();
//	LCD_CTRL &= ~(1 << EN_SWITCH | 1 << RS_SWITCH | 1 << RW_SWITCH);
//	DataDir_LCD_PORT = 0xFF;
	delay_ms(15);

	LCD_clear_screen();
	LCD_WRITE_COMMAND(LCD_FUNCTION_8BIT_2LINES);
	LCD_WRITE_COMMAND(LCD_ENTRY_MODE);
	LCD_WRITE_COMMAND(LCD_BEGIN_AT_FIRST_ROW);
	LCD_WRITE_COMMAND(LCD_DISP_ON_CURSOR_BLINK);
}

void LCD_check_lcd_isbusy() {
//	DataDir_LCD_PORT &= ~(0xFF << DATA_shift);
	PinCfg.GPIO_PINNumber = GPIO_PIN0;
	PinCfg.GPIO_Mode = GPIO_Mode_IN_Float;
	MCAL_GPIO_init(LCD_CTRL, &PinCfg);

	PinCfg.GPIO_PINNumber = GPIO_PIN1;
	PinCfg.GPIO_Mode = GPIO_Mode_IN_Float;
	MCAL_GPIO_init(LCD_CTRL, &PinCfg);

	PinCfg.GPIO_PINNumber = GPIO_PIN2;
	PinCfg.GPIO_Mode = GPIO_Mode_IN_Float;
	MCAL_GPIO_init(LCD_CTRL, &PinCfg);

	PinCfg.GPIO_PINNumber = GPIO_PIN3;
	PinCfg.GPIO_Mode = GPIO_Mode_IN_Float;
	MCAL_GPIO_init(LCD_CTRL, &PinCfg);

	PinCfg.GPIO_PINNumber = GPIO_PIN4;
	PinCfg.GPIO_Mode = GPIO_Mode_IN_Float;
	MCAL_GPIO_init(LCD_CTRL, &PinCfg);

	PinCfg.GPIO_PINNumber = GPIO_PIN5;
	PinCfg.GPIO_Mode = GPIO_Mode_IN_Float;
	MCAL_GPIO_init(LCD_CTRL, &PinCfg);

	PinCfg.GPIO_PINNumber = GPIO_PIN6;
	PinCfg.GPIO_Mode = GPIO_Mode_IN_Float;
	MCAL_GPIO_init(LCD_CTRL, &PinCfg);

	PinCfg.GPIO_PINNumber = GPIO_PIN7;
	PinCfg.GPIO_Mode = GPIO_Mode_IN_Float;
	MCAL_GPIO_init(LCD_CTRL, &PinCfg);

	MCAL_GPIO_WritePIN(LCD_CTRL, RW_SWITCH, GPIO_PIN_HIGH);
	MCAL_GPIO_WritePIN(LCD_CTRL, RS_SWITCH, GPIO_PIN_LOW);
//	LCD_CTRL |= (1 << RW_SWITCH);
//	LCD_CTRL &= ~(1 << RS_SWITCH);
	LCD_lcd_kick();
//	DataDir_LCD_PORT |= (0xFF << DATA_shift);
	MCAL_GPIO_WritePIN(LCD_CTRL, RW_SWITCH, GPIO_PIN_LOW);
//	LCD_CTRL &= ~(1 << RW_SWITCH);

}

void LCD_WRITE_COMMAND(uint8 command) {
//	LCD_check_lcd_isbusy();
	MCAL_GPIO_WritePort(LCD_CTRL, command);
//	LCD_CTRL->BRR = (LCD_CTRL->BRR & 0x00FF) | (command);
//	LCD_CTRL->CRL ^= (LCD_CTRL->CRL ^ command) & 0x00ff;
//	LCD_CTRL->CRL = command;
//	LCD_CTRL ^= (LCD_CTRL-> ^ command) & 0x00ff;
	MCAL_GPIO_WritePIN(LCD_CTRL, RW_SWITCH, GPIO_PIN_LOW);
	MCAL_GPIO_WritePIN(LCD_CTRL, RS_SWITCH, GPIO_PIN_LOW);
//	LCD_CTRL &= ~((1 << RS_SWITCH) | (1<<RW_SWITCH));
	delay_ms(1);
	LCD_lcd_kick();

}

void LCD_WRITE_CHAR(uint8 character) {
//	LCD_check_lcd_isbusy();
//	LCD_CTRL->CRL = character;
//	LCD_CTRL->CRL ^= (LCD_CTRL->CRL ^ character) & 0x00ff;
	MCAL_GPIO_WritePort(LCD_CTRL, character);
//	LCD_CTRL ^= (LCD_CTRL ^ character) & 0x00ff;
	MCAL_GPIO_WritePIN(LCD_CTRL, RW_SWITCH, GPIO_PIN_LOW);
	MCAL_GPIO_WritePIN(LCD_CTRL, RS_SWITCH, GPIO_PIN_HIGH);
//	LCD_CTRL &= ~(1 << RW_SWITCH);
//	LCD_CTRL |= (1 << RS_SWITCH);
	delay_ms(1);
	LCD_lcd_kick();
}

void LCD_WRITE_STRING(char *string) {
	int count = 0;
	while (*string > 0) {
		count++;
		LCD_WRITE_CHAR(*string++);
		if (count == 16) {
			LCD_GOTO_XY(2, 0);
		} else if (count == 32) {
			LCD_clear_screen();
			LCD_GOTO_XY(1, 0);
			count = 0;
		}
	}
}


