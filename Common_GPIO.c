#include "Common_Header.h"

void OUT_PP_Config(Common_GPIO_Sturct *Normal_GPIO_Init)
{
#if STM32F10x
	RCC_APB2PeriphClockCmd(Normal_GPIO_Init->RCC_AXXPeriph_GPIOX,ENABLE);
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;					//推挽输出
	GPIO_InitStruct.GPIO_Speed = STM32F10x_SPEED;	
#elif STM32F4xx
	RCC_AHB1PeriphClockCmd(Normal_GPIO_Init->RCC_AXXPeriph_GPIOX,ENABLE);		//开启时钟
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_InitStruct.GPIO_PuPd = GPIO_PuPd_UP;							//上拉
	GPIO_InitStruct.GPIO_OType = GPIO_OType_PP;						//推挽输出模式
	GPIO_InitStruct.GPIO_Speed = STM32F4xx_SPEED;	
#endif
	GPIO_InitStruct.GPIO_Pin = Normal_GPIO_Init->GPIO_PIN;									//配置引脚									
	GPIO_Init(Normal_GPIO_Init->GPIOX,&GPIO_InitStruct);
	GPIO_SetBits(Normal_GPIO_Init->GPIOX,Normal_GPIO_Init->GPIO_PIN);
}


void OUT_OP_Config(Common_GPIO_Sturct *Normal_GPIO_Init)
{
#if STM32F10x
	RCC_APB2PeriphClockCmd(Normal_GPIO_Init->RCC_AXXPeriph_GPIOX,ENABLE);
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_OP;					//开漏输出
	GPIO_InitStruct.GPIO_Speed = STM32F10x_SPEED;
		
#elif STM32F4xx
	RCC_AHB1PeriphClockCmd(Normal_GPIO_Init->RCC_AXXPeriph_GPIOX,ENABLE);		//开启时钟
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_InitStruct.GPIO_PuPd = GPIO_PuPd_UP;							//是否上拉
	GPIO_InitStruct.GPIO_OType = GPIO_OType_OD;						//推挽输出模式
	GPIO_InitStruct.GPIO_Speed = STM32F4xx_SPEED;	
#endif
	GPIO_InitStruct.GPIO_Pin = Normal_GPIO_Init->GPIO_PIN;									//配置引脚											
	GPIO_Init(Normal_GPIO_Init->GPIOX,&GPIO_InitStruct);
	GPIO_SetBits(Normal_GPIO_Init->GPIOX,Normal_GPIO_Init->GPIO_PIN);
}





void OUT_AFOD_Config(Common_GPIO_Sturct *Normal_GPIO_Init)
{
#if STM32F10x
	RCC_APB2PeriphClockCmd(Normal_GPIO_Init->RCC_AXXPeriph_GPIOX,ENABLE);
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_AF_OD;					//复用开漏
	GPIO_InitStruct.GPIO_Speed = STM32F10x_SPEED;
		
#elif STM32F4xx
	RCC_AHB1PeriphClockCmd(Normal_GPIO_Init->RCC_AXXPeriph_GPIOX,ENABLE);		//开启时钟
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_InitStruct.GPIO_PuPd = GPIO_PuPd_NOPULL;					//浮空
	GPIO_InitStruct.GPIO_OType = GPIO_OType_OD;						//复用开漏输出模式
	GPIO_InitStruct.GPIO_Speed = STM32F4xx_SPEED;					//输出速度
#endif
	GPIO_InitStruct.GPIO_Pin =Normal_GPIO_Init->GPIO_PIN;									//配置引脚													
	GPIO_Init(Normal_GPIO_Init->GPIOX,&GPIO_InitStruct);
	GPIO_SetBits(Normal_GPIO_Init->GPIOX,Normal_GPIO_Init->GPIO_PIN);
}


void OUT_AFPP_Config(Common_GPIO_Sturct *Normal_GPIO_Init )
{
#if STM32F10x
	RCC_APB2PeriphClockCmd(Normal_GPIO_Init->RCC_AXXPeriph_GPIOX,ENABLE);
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_AF_PP;					//复用推挽
	GPIO_InitStruct.GPIO_Speed = STM32F10x_SPEED;
		
#elif STM32F4xx
	RCC_AHB1PeriphClockCmd(Normal_GPIO_Init->RCC_AXXPeriph_GPIOX,ENABLE);		//开启时钟
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_InitStruct.GPIO_PuPd = GPIO_PuPd_NOPULL;					//浮空
	GPIO_InitStruct.GPIO_OType = GPIO_OType_PP;						//推挽输出模式
	GPIO_InitStruct.GPIO_Speed = STM32F4xx_SPEED;				//输出速度
#endif
	GPIO_InitStruct.GPIO_Pin = Normal_GPIO_Init->GPIO_PIN;									//配置引脚													
	GPIO_Init(Normal_GPIO_Init->GPIOX,&GPIO_InitStruct);
	GPIO_SetBits(Normal_GPIO_Init->GPIOX,Normal_GPIO_Init->GPIO_PIN);
}






void IN_PD_Config(Common_GPIO_Sturct *Normal_GPIO_Init )
{
#if STM32F10x
	RCC_APB2PeriphClockCmd(Normal_GPIO_Init->RCC_AXXPeriph_GPIOX,ENABLE); 	//开启时钟
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IPD;
#elif STM32F4xx
	RCC_AHB1PeriphClockCmd(Normal_GPIO_Init->RCC_AXXPeriph_GPIOX,ENABLE);		//开启时钟
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IN;
	GPIO_InitStruct.GPIO_PuPd = GPIO_PuPd_DOWN;
#endif
	GPIO_InitStruct.GPIO_Pin = Normal_GPIO_Init->GPIO_PIN;									//配置引脚											
	GPIO_Init(Normal_GPIO_Init->GPIOX,&GPIO_InitStruct);

}



void IN_PU_Config(Common_GPIO_Sturct *Normal_GPIO_Init)
{
#if STM32F10x
	RCC_APB2PeriphClockCmd(Normal_GPIO_Init->RCC_AXXPeriph_GPIOX,ENABLE);
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IPU;
	

#elif STM32F4xx
	RCC_AHB1PeriphClockCmd(Normal_GPIO_Init->RCC_AXXPeriph_GPIOX,ENABLE);		//开启时钟
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IN;
	GPIO_InitStruct.GPIO_PuPd = GPIO_PuPd_UP;
	
#endif
	GPIO_InitStruct.GPIO_Pin = Normal_GPIO_Init->GPIO_PIN;									//配置引脚											
	GPIO_Init(Normal_GPIO_Init->GPIOX,&GPIO_InitStruct);
	
}


void IN_NUD_Config(Common_GPIO_Sturct *Normal_GPIO_Init)
{
#if STM32F10x
	RCC_APB2PeriphClockCmd(Normal_GPIO_Init->RCC_AXXPeriph_GPIOX,ENABLE);
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IN_FLOATING;	
#elif STM32F4xx
	RCC_AHB1PeriphClockCmd(Normal_GPIO_Init->RCC_AXXPeriph_GPIOX,ENABLE);		//开启时钟
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IN;
	GPIO_InitStruct.GPIO_PuPd = GPIO_PuPd_NOPULL;
#endif
	GPIO_InitStruct.GPIO_Pin = Normal_GPIO_Init->GPIO_PIN;									//配置引脚											
	GPIO_Init(Normal_GPIO_Init->GPIOX,&GPIO_InitStruct);
	
}


void IN_ADC_Config(Common_GPIO_Sturct *Normal_GPIO_Init )
{
#if STM32F10x
	RCC_APB2PeriphClockCmd(Normal_GPIO_Init->RCC_AXXPeriph_GPIOX,ENABLE);
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_AIN;
#elif STM32F4xx
	RCC_AHB1PeriphClockCmd(Normal_GPIO_Init->RCC_AXXPeriph_GPIOX,ENABLE);		//开启时钟
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_AIN;
	GPIO_InitStruct.GPIO_PuPd = GPIO_PuPd_NOPULL;;
#endif
	GPIO_InitStruct.GPIO_Pin = Normal_GPIO_Init->GPIO_PIN;									//配置引脚											
	GPIO_Init(Normal_GPIO_Init->GPIOX,&GPIO_InitStruct);



}


uint8_t IN_Sanf(GPIO_TypeDef *GPIOx,uint16_t GPIO_Pin)
{
	if(GPIO_ReadInputDataBit(GPIOx, GPIO_Pin) == ON )
	{
		while( GPIO_ReadInputDataBit(GPIOx, GPIO_Pin) == ON )
		return ON;
	}
	else 
		return OFF;
}













	
