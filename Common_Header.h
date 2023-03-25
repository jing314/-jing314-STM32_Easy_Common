#ifndef _COMMON_HEADER_H
#define _COMMON_HEADER_H

#define STM32F10x  0    
#define STM32F4xx  1
/*
定义开为 		1
		关为		0
*/



#if STM32F4xx
#include "stm32f4xx.h"
#elif STM32F10x
#include "stm32f10x.h"
#endif


#include "stdint.h"
#include "Common_Struct.h"
#include "Common_GPIO.h"
#include "Common_EXTI.h"

#endif

