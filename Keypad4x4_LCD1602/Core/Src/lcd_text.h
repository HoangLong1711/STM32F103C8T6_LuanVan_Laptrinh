#ifndef SRC_LCD_TEXT_H_
#define SRC_LCD_TEXT_H_

#include "stm32f1xx.h"


/*------------- Define LCD Use -----------------*/

/*Note: Comment which not use */

#define LCD16xN //For lcd16x2 or lcd16x4
//#define LCD20xN //For lcd20x4

/*------------- Define For Connection -----------------*/

#define RS_PORT		GPIOB
#define RS_PIN		GPIO_PIN_4

#define EN_PORT		GPIOB
#define EN_PIN		GPIO_PIN_5

#define D7_PORT		GPIOB
#define D7_PIN		GPIO_PIN_9

#define D6_PORT		GPIOB
#define D6_PIN		GPIO_PIN_8

#define D5_PORT		GPIOB
#define D5_PIN		GPIO_PIN_7

#define D4_PORT		GPIOB
#define D4_PIN		GPIO_PIN_6


/*------------ Declaring Private Macro -----------------*/

#define PIN_LOW(PORT,PIN)	HAL_GPIO_WritePin(PORT,PIN,GPIO_PIN_RESET);
#define PIN_HIGH(PORT,PIN)	HAL_GPIO_WritePin(PORT,PIN,GPIO_PIN_SET);

/*------------ Declaring Function Prototype -------------*/
void lcd_init(void);
void lcd_write(uint8_t type,uint8_t data);
void lcd_puts(uint8_t x, uint8_t y, int8_t *string);
void lcd_clear(void);

#endif /* SRC_LCD_TEXT_H_ */
