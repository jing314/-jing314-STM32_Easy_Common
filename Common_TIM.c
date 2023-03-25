#include "Common_Header.h"


void Common_TIM3_Config(Common_TIM_Sturct* Normal_TIM_Init)
{
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3,ENABLE);				 				 //ʹ�� TIM3 ʱ��
	TIM_TimeBaseInitTypeDef TIM_TimeBaseStructure;
	TIM_TimeBaseStructure.TIM_Period = Normal_TIM_Init->TIM_Period;									 			//�����Զ����ؼ�������ֵ
	TIM_TimeBaseStructure.TIM_Prescaler = Normal_TIM_Init->TIM_Prescaler;							 		//���÷�Ƶϵ��
	TIM_TimeBaseStructure.TIM_ClockDivision = Normal_TIM_Init->TIM_ClockDivision; 	 			//����ʱ�ӷ�Ƶ����
	TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up; 													//���ϼ���ģʽ
	TIM_TimeBaseInit(TIM3, &TIM_TimeBaseStructure);
	
	
	TIM_ITConfig(TIM3,TIM_IT_Update,ENABLE ); 																						//�����ж� TIM_IT_Update�������ж� TIM_IT_Trigger
	NVIC_PriorityGroupConfig(Normal_TIM_Init->NVIC_PriorityGroup);
	NVIC_InitTypeDef NVIC_InitStructure;
	NVIC_InitStructure.NVIC_IRQChannel=TIM3_IRQn; 																				//��ʱ�� 3 �ж�
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = Normal_TIM_Init->Prepro;		//��ռ���ȼ�
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = Normal_TIM_Init->Subpro; 					//��Ӧ���ȼ�
	NVIC_InitStructure.NVIC_IRQChannelCmd=ENABLE;	
	NVIC_Init(&NVIC_InitStructure);																												// ��ʼ�� NVIC
	
	TIM_Cmd(TIM3, ENABLE); 																																//ʹ�� TIMx ����
}


