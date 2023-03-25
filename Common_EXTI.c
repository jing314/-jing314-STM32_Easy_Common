#include "Common_Header.h"

/*
*	通用型外部中断0
*	Common_EXTI_Sturct 见Common_Struct.h
*/

void Common_EXIT0_Config(Common_EXTI_Sturct *Normal_EXTI_Init)												//外部中断0
{	
	RCC_AHB1PeriphClockCmd(Normal_EXTI_Init->RCC_AXXXENR_GPIOxEN,ENABLE);								//打开时钟
	
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Pin  = GPIO_Pin_0;																							//引脚3
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IN;																						//模式为输入
	GPIO_InitStruct.GPIO_PuPd = Normal_EXTI_Init->GPIO_PuPd;														//上拉或下拉或浮空
	GPIO_Init(GPIOE,&GPIO_InitStruct);																									//配置结构体
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_SYSCFG, ENABLE);
	SYSCFG_EXTILineConfig(Normal_EXTI_Init->EXTI_PortSourceGPIOx,EXTI_PinSource0);
	
	EXTI_InitTypeDef EXTI_InitStructure;
	EXTI_InitStructure.EXTI_Line = EXTI_Line0;
	EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
	EXTI_InitStructure.EXTI_Trigger = Normal_EXTI_Init->EXTI_Trigger;
	EXTI_InitStructure.EXTI_LineCmd = ENABLE;
	EXTI_Init(&EXTI_InitStructure);
	
	NVIC_InitTypeDef NVIC_InitStructure;				
	NVIC_PriorityGroupConfig(Normal_EXTI_Init->NVIC_PriorityGroup);						  				/* 配置 NVIC 为优先级组 1 */
	NVIC_InitStructure.NVIC_IRQChannel = EXTI0_IRQn;																		/* 配置中断源：按键 1 */
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = Normal_EXTI_Init->Prepro;		/* 配置抢占优先级： 1 */
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = Normal_EXTI_Init->Subpro;					  /* 配置子优先级： 1 */
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;																			/* 使能中断通道 */
	NVIC_Init(&NVIC_InitStructure);
}


/*
*通用型外部中断1
*/

void Common_EXIT1_Config(Common_EXTI_Sturct *Normal_EXTI_Init)												//外部中断0
{	
	RCC_AHB1PeriphClockCmd(Normal_EXTI_Init->RCC_AXXXENR_GPIOxEN,ENABLE);								//打开时钟
	
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Pin  = GPIO_Pin_1;																							//引脚3
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IN;																						//模式为输入
	GPIO_InitStruct.GPIO_PuPd = Normal_EXTI_Init->GPIO_PuPd;														//上拉或下拉或浮空
	GPIO_Init(GPIOE,&GPIO_InitStruct);																									//配置结构体
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_SYSCFG, ENABLE);
	SYSCFG_EXTILineConfig(Normal_EXTI_Init->EXTI_PortSourceGPIOx,EXTI_PinSource1);
	
	EXTI_InitTypeDef EXTI_InitStructure;
	EXTI_InitStructure.EXTI_Line = EXTI_Line1;
	EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
	EXTI_InitStructure.EXTI_Trigger = Normal_EXTI_Init->EXTI_Trigger;
	EXTI_InitStructure.EXTI_LineCmd = ENABLE;
	EXTI_Init(&EXTI_InitStructure);
	
	NVIC_InitTypeDef NVIC_InitStructure;				
	NVIC_PriorityGroupConfig(Normal_EXTI_Init->NVIC_PriorityGroup);						  				/* 配置 NVIC 为优先级组 1 */
	NVIC_InitStructure.NVIC_IRQChannel = EXTI1_IRQn;																		/* 配置中断源：按键 1 */
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = Normal_EXTI_Init->Prepro;		/* 配置抢占优先级： 1 */
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = Normal_EXTI_Init->Subpro;					  /* 配置子优先级： 1 */
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;																			/* 使能中断通道 */
	NVIC_Init(&NVIC_InitStructure);
}

/*
*通用型外部中断2
*/


void Common_EXIT2_Config(Common_EXTI_Sturct *Normal_EXTI_Init)												//外部中断0
{	
	RCC_AHB1PeriphClockCmd(Normal_EXTI_Init->RCC_AXXXENR_GPIOxEN,ENABLE);								//打开时钟
	
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Pin  = GPIO_Pin_2;																							//引脚3
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IN;																						//模式为输入
	GPIO_InitStruct.GPIO_PuPd = Normal_EXTI_Init->GPIO_PuPd;														//上拉或下拉或浮空
	GPIO_Init(GPIOE,&GPIO_InitStruct);																									//配置结构体
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_SYSCFG, ENABLE);
	SYSCFG_EXTILineConfig(Normal_EXTI_Init->EXTI_PortSourceGPIOx,EXTI_PinSource2);
	
	EXTI_InitTypeDef EXTI_InitStructure;
	EXTI_InitStructure.EXTI_Line = EXTI_Line2;
	EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
	EXTI_InitStructure.EXTI_Trigger = Normal_EXTI_Init->EXTI_Trigger;
	EXTI_InitStructure.EXTI_LineCmd = ENABLE;
	EXTI_Init(&EXTI_InitStructure);
	
	NVIC_InitTypeDef NVIC_InitStructure;				
	NVIC_PriorityGroupConfig(Normal_EXTI_Init->NVIC_PriorityGroup);						  				/* 配置 NVIC 为优先级组 1 */
	NVIC_InitStructure.NVIC_IRQChannel = EXTI2_IRQn;																		/* 配置中断源：按键 1 */
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = Normal_EXTI_Init->Prepro;		/* 配置抢占优先级： 1 */
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = Normal_EXTI_Init->Subpro;					  /* 配置子优先级： 1 */
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;																			/* 使能中断通道 */
	NVIC_Init(&NVIC_InitStructure);
}

/*
*通用型外部中断3
*/



void Common_EXIT3_Config(Common_EXTI_Sturct *Normal_EXTI_Init)												//外部中断0
{	
	RCC_AHB1PeriphClockCmd(Normal_EXTI_Init->RCC_AXXXENR_GPIOxEN,ENABLE);								//打开时钟
	
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Pin  = GPIO_Pin_3;																							//引脚3
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IN;																						//模式为输入
	GPIO_InitStruct.GPIO_PuPd = Normal_EXTI_Init->GPIO_PuPd;														//上拉或下拉或浮空
	GPIO_Init(GPIOE,&GPIO_InitStruct);																									//配置结构体
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_SYSCFG, ENABLE);
	SYSCFG_EXTILineConfig(Normal_EXTI_Init->EXTI_PortSourceGPIOx,EXTI_PinSource3);
	
	EXTI_InitTypeDef EXTI_InitStructure;
	EXTI_InitStructure.EXTI_Line = EXTI_Line3;
	EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
	EXTI_InitStructure.EXTI_Trigger = Normal_EXTI_Init->EXTI_Trigger;
	EXTI_InitStructure.EXTI_LineCmd = ENABLE;
	EXTI_Init(&EXTI_InitStructure);
	
	NVIC_InitTypeDef NVIC_InitStructure;				
	NVIC_PriorityGroupConfig(Normal_EXTI_Init->NVIC_PriorityGroup);						  				/* 配置 NVIC 为优先级组 1 */
	NVIC_InitStructure.NVIC_IRQChannel = EXTI3_IRQn;																		/* 配置中断源：按键 1 */
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = Normal_EXTI_Init->Prepro;		/* 配置抢占优先级： 1 */
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = Normal_EXTI_Init->Subpro;					  /* 配置子优先级： 1 */
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;																			/* 使能中断通道 */
	NVIC_Init(&NVIC_InitStructure);
}


/*
*通用型外部中断4
*/


void Common_EXIT4_Config(Common_EXTI_Sturct *Normal_EXTI_Init)												//外部中断0
{	
	RCC_AHB1PeriphClockCmd(Normal_EXTI_Init->RCC_AXXXENR_GPIOxEN,ENABLE);								//打开时钟
	
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Pin  = GPIO_Pin_4;																							//引脚3
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IN;																						//模式为输入
	GPIO_InitStruct.GPIO_PuPd = Normal_EXTI_Init->GPIO_PuPd;														//上拉或下拉或浮空
	GPIO_Init(GPIOE,&GPIO_InitStruct);																									//配置结构体
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_SYSCFG, ENABLE);
	SYSCFG_EXTILineConfig(Normal_EXTI_Init->EXTI_PortSourceGPIOx,EXTI_PinSource4);
	
	EXTI_InitTypeDef EXTI_InitStructure;
	EXTI_InitStructure.EXTI_Line = EXTI_Line4;
	EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
	EXTI_InitStructure.EXTI_Trigger = Normal_EXTI_Init->EXTI_Trigger;
	EXTI_InitStructure.EXTI_LineCmd = ENABLE;
	EXTI_Init(&EXTI_InitStructure);
	
	NVIC_InitTypeDef NVIC_InitStructure;				
	NVIC_PriorityGroupConfig(Normal_EXTI_Init->NVIC_PriorityGroup);						  				/* 配置 NVIC 为优先级组 1 */
	NVIC_InitStructure.NVIC_IRQChannel = EXTI4_IRQn;																		/* 配置中断源：按键 1 */
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = Normal_EXTI_Init->Prepro;		/* 配置抢占优先级： 1 */
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = Normal_EXTI_Init->Subpro;					  /* 配置子优先级： 1 */
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;																			/* 使能中断通道 */
	NVIC_Init(&NVIC_InitStructure);
}


/*
*通用型外部中断9_5
*/


void Common_EXIT9_5_Config(Common_EXTI_Sturct *Normal_EXTI_Init)												//外部中断0
{	
	RCC_AHB1PeriphClockCmd(Normal_EXTI_Init->RCC_AXXXENR_GPIOxEN,ENABLE);								//打开时钟
	
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Pin  = Normal_EXTI_Init->GPIO_Pin;																							//引脚3
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IN;																						//模式为输入
	GPIO_InitStruct.GPIO_PuPd = Normal_EXTI_Init->GPIO_PuPd;														//上拉或下拉或浮空
	GPIO_Init(GPIOE,&GPIO_InitStruct);																									//配置结构体
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_SYSCFG, ENABLE);
	SYSCFG_EXTILineConfig(Normal_EXTI_Init->EXTI_PortSourceGPIOx,Normal_EXTI_Init->EXTI_PinSourcex);
	
	EXTI_InitTypeDef EXTI_InitStructure;
	EXTI_InitStructure.EXTI_Line = Normal_EXTI_Init->EXTI_Line;
	EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
	EXTI_InitStructure.EXTI_Trigger = Normal_EXTI_Init->EXTI_Trigger;
	EXTI_InitStructure.EXTI_LineCmd = ENABLE;
	EXTI_Init(&EXTI_InitStructure);
	
	NVIC_InitTypeDef NVIC_InitStructure;				
	NVIC_PriorityGroupConfig(Normal_EXTI_Init->NVIC_PriorityGroup);						  				/* 配置 NVIC 为优先级组 1 */
	NVIC_InitStructure.NVIC_IRQChannel = EXTI9_5_IRQn;																		/* 配置中断源：按键 1 */
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = Normal_EXTI_Init->Prepro;		/* 配置抢占优先级： 1 */
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = Normal_EXTI_Init->Subpro;					  /* 配置子优先级： 1 */
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;																			/* 使能中断通道 */
	NVIC_Init(&NVIC_InitStructure);
}

/*
*通用型外部中断15_10
*/


void Common_EXIT15_10_Config(Common_EXTI_Sturct *Normal_EXTI_Init)												//外部中断0
{	
	RCC_AHB1PeriphClockCmd(Normal_EXTI_Init->RCC_AXXXENR_GPIOxEN,ENABLE);								//打开时钟
	
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Pin  = Normal_EXTI_Init->GPIO_Pin;																							//引脚3
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IN;																						//模式为输入
	GPIO_InitStruct.GPIO_PuPd = Normal_EXTI_Init->GPIO_PuPd;														//上拉或下拉或浮空
	GPIO_Init(GPIOE,&GPIO_InitStruct);																									//配置结构体
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_SYSCFG, ENABLE);
	SYSCFG_EXTILineConfig(Normal_EXTI_Init->EXTI_PortSourceGPIOx,Normal_EXTI_Init->EXTI_PinSourcex);
	
	EXTI_InitTypeDef EXTI_InitStructure;
	EXTI_InitStructure.EXTI_Line = Normal_EXTI_Init->EXTI_Line;
	EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
	EXTI_InitStructure.EXTI_Trigger = Normal_EXTI_Init->EXTI_Trigger;
	EXTI_InitStructure.EXTI_LineCmd = ENABLE;
	EXTI_Init(&EXTI_InitStructure);
	
	NVIC_InitTypeDef NVIC_InitStructure;				
	NVIC_PriorityGroupConfig(Normal_EXTI_Init->NVIC_PriorityGroup);						  				/* 配置 NVIC 为优先级组 1 */
	NVIC_InitStructure.NVIC_IRQChannel = EXTI15_10_IRQn;																		/* 配置中断源：按键 1 */
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = Normal_EXTI_Init->Prepro;		/* 配置抢占优先级： 1 */
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = Normal_EXTI_Init->Subpro;					  /* 配置子优先级： 1 */
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;																			/* 使能中断通道 */
	NVIC_Init(&NVIC_InitStructure);
}


//编写中断服务函数
