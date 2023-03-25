#include "Common_Header.h"


void Common_TIM3_Config(Common_TIM_Sturct* Normal_TIM_Init)
{
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3,ENABLE);				 				 //使能 TIM3 时钟
	TIM_TimeBaseInitTypeDef TIM_TimeBaseStructure;
	TIM_TimeBaseStructure.TIM_Period = Normal_TIM_Init->TIM_Period;									 			//设置自动重载计数周期值
	TIM_TimeBaseStructure.TIM_Prescaler = Normal_TIM_Init->TIM_Prescaler;							 		//设置分频系数
	TIM_TimeBaseStructure.TIM_ClockDivision = Normal_TIM_Init->TIM_ClockDivision; 	 			//设置时钟分频因子
	TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up; 													//向上计数模式
	TIM_TimeBaseInit(TIM3, &TIM_TimeBaseStructure);
	
	
	TIM_ITConfig(TIM3,TIM_IT_Update,ENABLE ); 																						//更新中断 TIM_IT_Update，触发中断 TIM_IT_Trigger
	NVIC_PriorityGroupConfig(Normal_TIM_Init->NVIC_PriorityGroup);
	NVIC_InitTypeDef NVIC_InitStructure;
	NVIC_InitStructure.NVIC_IRQChannel=TIM3_IRQn; 																				//定时器 3 中断
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = Normal_TIM_Init->Prepro;		//抢占优先级
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = Normal_TIM_Init->Subpro; 					//响应优先级
	NVIC_InitStructure.NVIC_IRQChannelCmd=ENABLE;	
	NVIC_Init(&NVIC_InitStructure);																												// 初始化 NVIC
	
	TIM_Cmd(TIM3, ENABLE); 																																//使能 TIMx 外设
}


