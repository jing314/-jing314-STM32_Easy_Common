#ifndef _COMMON_STRUCT_H
#define _COMMON_STRUCT_H

/* 
由于单片机速度要求不同，可单独更改其速度值。
*/

#define STM32F10x_SPEED    GPIO_Speed_50MHz
#define STM32F4xx_SPEED    GPIO_Speed_100MHz

/*
* uint32_t RCC_AXXPeriph_GPIOX  ：不同芯片根据其时钟数确定其时钟所在如：RCC_APB2Periph_GPIOA等等

* GPIO_TypeDef* GPIOX					  ：根据引脚类如：GPIOA，GPIOB.....

* uint16_t GPIO_PIN							：引脚号如：GPIO_PIN_1,GPIO_PIN_2......
*/
typedef struct 
{
	uint32_t RCC_AXXPeriph_GPIOX; //时钟使能
	
	GPIO_TypeDef *GPIOX;					//GPIOX
	
	uint16_t GPIO_PIN;						//PIN
	
}Common_GPIO_Sturct;


/*

*	uint32_t RCC_AXXXENR_GPIOxEN;					//对应GPIO组如：GPIOA。。。
	
*	uint8_t EXTI_PortSourceGPIOx;					//对应GPIO组如：GPIOA。。。
	
*	uint16_t GPIO_Pin;                    //对应GPIO引脚如：GPIO_PIN_1（多线时使用，一般无需配置）
	
*	uint32_t EXTI_Line;										//对应中断线（多线时使用，一般无需配置）
	
*	uint8_t EXTI_PinSourcex;							//中断连接的GPIO引脚（多线时使用，一般无需配置）
	
*	GPIOPuPd_TypeDef GPIO_PuPd;						//引脚模式
	
*	EXTITrigger_TypeDef EXTI_Trigger; 		//中断触发模式
	
*	uint32_t NVIC_PriorityGroup;					//优先级分组
	
*	uint8_t  Prepro;											//抢占优先级
	
*	uint8_t  Subpro;											//子优先级

*/




	typedef struct
{                                                                                  

	
	uint32_t RCC_AXXXENR_GPIOxEN;					//对应GPIO组如：GPIOA。。。
	
	uint8_t EXTI_PortSourceGPIOx;					//对应GPIO组如：GPIOA。。。
	
	uint16_t GPIO_Pin;                    //对应GPIO引脚如：GPIO_PIN_1
	
	uint32_t EXTI_Line;										//对应中断线
	
	uint8_t EXTI_PinSourcex;							//中断连接的GPIO引脚
	
	GPIOPuPd_TypeDef GPIO_PuPd;						//引脚模式
	
	EXTITrigger_TypeDef EXTI_Trigger; 		//中断触发模式
	
	uint32_t NVIC_PriorityGroup;					//优先级分组
	
	uint8_t  Prepro;											//抢占优先级
	
	uint8_t  Subpro;											//子优先级
	
}Common_EXTI_Sturct;


#endif


