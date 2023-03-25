#ifndef COMMON_USART_H
#define COMMON_USART_H
#include "Common_Struct.h"
void Common_Usart1_Config(Common_USART_Sturct* Normal_USART_Init);
void Common_Usart2_Config(Common_USART_Sturct* Normal_USART_Init);
void Usart_SendByte(USART_TypeDef *USARTx,uint8_t ch);
void Usart_SendString( USART_TypeDef * USARTx, char *str);


#endif

