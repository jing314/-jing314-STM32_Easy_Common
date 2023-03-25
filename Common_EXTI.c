#include "Common_Header.h"

/*
*	ͨ�����ⲿ�ж�0
*	Common_EXTI_Sturct ��Common_Struct.h
*/

void Common_EXIT0_Config(Common_EXTI_Sturct *Normal_EXTI_Init)												//�ⲿ�ж�0
{	
	RCC_AHB1PeriphClockCmd(Normal_EXTI_Init->RCC_AXXXENR_GPIOxEN,ENABLE);								//��ʱ��
	
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Pin  = GPIO_Pin_0;																							//����3
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IN;																						//ģʽΪ����
	GPIO_InitStruct.GPIO_PuPd = Normal_EXTI_Init->GPIO_PuPd;														//�����������򸡿�
	GPIO_Init(GPIOE,&GPIO_InitStruct);																									//���ýṹ��
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_SYSCFG, ENABLE);
	SYSCFG_EXTILineConfig(Normal_EXTI_Init->EXTI_PortSourceGPIOx,EXTI_PinSource0);
	
	EXTI_InitTypeDef EXTI_InitStructure;
	EXTI_InitStructure.EXTI_Line = EXTI_Line0;
	EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
	EXTI_InitStructure.EXTI_Trigger = Normal_EXTI_Init->EXTI_Trigger;
	EXTI_InitStructure.EXTI_LineCmd = ENABLE;
	EXTI_Init(&EXTI_InitStructure);
	
	NVIC_InitTypeDef NVIC_InitStructure;				
	NVIC_PriorityGroupConfig(Normal_EXTI_Init->NVIC_PriorityGroup);						  				/* ���� NVIC Ϊ���ȼ��� 1 */
	NVIC_InitStructure.NVIC_IRQChannel = EXTI0_IRQn;																		/* �����ж�Դ������ 1 */
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = Normal_EXTI_Init->Prepro;		/* ������ռ���ȼ��� 1 */
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = Normal_EXTI_Init->Subpro;					  /* ���������ȼ��� 1 */
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;																			/* ʹ���ж�ͨ�� */
	NVIC_Init(&NVIC_InitStructure);
}


/*
*ͨ�����ⲿ�ж�1
*/

void Common_EXIT1_Config(Common_EXTI_Sturct *Normal_EXTI_Init)												//�ⲿ�ж�0
{	
	RCC_AHB1PeriphClockCmd(Normal_EXTI_Init->RCC_AXXXENR_GPIOxEN,ENABLE);								//��ʱ��
	
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Pin  = GPIO_Pin_1;																							//����3
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IN;																						//ģʽΪ����
	GPIO_InitStruct.GPIO_PuPd = Normal_EXTI_Init->GPIO_PuPd;														//�����������򸡿�
	GPIO_Init(GPIOE,&GPIO_InitStruct);																									//���ýṹ��
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_SYSCFG, ENABLE);
	SYSCFG_EXTILineConfig(Normal_EXTI_Init->EXTI_PortSourceGPIOx,EXTI_PinSource1);
	
	EXTI_InitTypeDef EXTI_InitStructure;
	EXTI_InitStructure.EXTI_Line = EXTI_Line1;
	EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
	EXTI_InitStructure.EXTI_Trigger = Normal_EXTI_Init->EXTI_Trigger;
	EXTI_InitStructure.EXTI_LineCmd = ENABLE;
	EXTI_Init(&EXTI_InitStructure);
	
	NVIC_InitTypeDef NVIC_InitStructure;				
	NVIC_PriorityGroupConfig(Normal_EXTI_Init->NVIC_PriorityGroup);						  				/* ���� NVIC Ϊ���ȼ��� 1 */
	NVIC_InitStructure.NVIC_IRQChannel = EXTI1_IRQn;																		/* �����ж�Դ������ 1 */
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = Normal_EXTI_Init->Prepro;		/* ������ռ���ȼ��� 1 */
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = Normal_EXTI_Init->Subpro;					  /* ���������ȼ��� 1 */
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;																			/* ʹ���ж�ͨ�� */
	NVIC_Init(&NVIC_InitStructure);
}

/*
*ͨ�����ⲿ�ж�2
*/


void Common_EXIT2_Config(Common_EXTI_Sturct *Normal_EXTI_Init)												//�ⲿ�ж�0
{	
	RCC_AHB1PeriphClockCmd(Normal_EXTI_Init->RCC_AXXXENR_GPIOxEN,ENABLE);								//��ʱ��
	
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Pin  = GPIO_Pin_2;																							//����3
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IN;																						//ģʽΪ����
	GPIO_InitStruct.GPIO_PuPd = Normal_EXTI_Init->GPIO_PuPd;														//�����������򸡿�
	GPIO_Init(GPIOE,&GPIO_InitStruct);																									//���ýṹ��
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_SYSCFG, ENABLE);
	SYSCFG_EXTILineConfig(Normal_EXTI_Init->EXTI_PortSourceGPIOx,EXTI_PinSource2);
	
	EXTI_InitTypeDef EXTI_InitStructure;
	EXTI_InitStructure.EXTI_Line = EXTI_Line2;
	EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
	EXTI_InitStructure.EXTI_Trigger = Normal_EXTI_Init->EXTI_Trigger;
	EXTI_InitStructure.EXTI_LineCmd = ENABLE;
	EXTI_Init(&EXTI_InitStructure);
	
	NVIC_InitTypeDef NVIC_InitStructure;				
	NVIC_PriorityGroupConfig(Normal_EXTI_Init->NVIC_PriorityGroup);						  				/* ���� NVIC Ϊ���ȼ��� 1 */
	NVIC_InitStructure.NVIC_IRQChannel = EXTI2_IRQn;																		/* �����ж�Դ������ 1 */
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = Normal_EXTI_Init->Prepro;		/* ������ռ���ȼ��� 1 */
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = Normal_EXTI_Init->Subpro;					  /* ���������ȼ��� 1 */
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;																			/* ʹ���ж�ͨ�� */
	NVIC_Init(&NVIC_InitStructure);
}

/*
*ͨ�����ⲿ�ж�3
*/



void Common_EXIT3_Config(Common_EXTI_Sturct *Normal_EXTI_Init)												//�ⲿ�ж�0
{	
	RCC_AHB1PeriphClockCmd(Normal_EXTI_Init->RCC_AXXXENR_GPIOxEN,ENABLE);								//��ʱ��
	
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Pin  = GPIO_Pin_3;																							//����3
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IN;																						//ģʽΪ����
	GPIO_InitStruct.GPIO_PuPd = Normal_EXTI_Init->GPIO_PuPd;														//�����������򸡿�
	GPIO_Init(GPIOE,&GPIO_InitStruct);																									//���ýṹ��
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_SYSCFG, ENABLE);
	SYSCFG_EXTILineConfig(Normal_EXTI_Init->EXTI_PortSourceGPIOx,EXTI_PinSource3);
	
	EXTI_InitTypeDef EXTI_InitStructure;
	EXTI_InitStructure.EXTI_Line = EXTI_Line3;
	EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
	EXTI_InitStructure.EXTI_Trigger = Normal_EXTI_Init->EXTI_Trigger;
	EXTI_InitStructure.EXTI_LineCmd = ENABLE;
	EXTI_Init(&EXTI_InitStructure);
	
	NVIC_InitTypeDef NVIC_InitStructure;				
	NVIC_PriorityGroupConfig(Normal_EXTI_Init->NVIC_PriorityGroup);						  				/* ���� NVIC Ϊ���ȼ��� 1 */
	NVIC_InitStructure.NVIC_IRQChannel = EXTI3_IRQn;																		/* �����ж�Դ������ 1 */
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = Normal_EXTI_Init->Prepro;		/* ������ռ���ȼ��� 1 */
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = Normal_EXTI_Init->Subpro;					  /* ���������ȼ��� 1 */
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;																			/* ʹ���ж�ͨ�� */
	NVIC_Init(&NVIC_InitStructure);
}


/*
*ͨ�����ⲿ�ж�4
*/


void Common_EXIT4_Config(Common_EXTI_Sturct *Normal_EXTI_Init)												//�ⲿ�ж�0
{	
	RCC_AHB1PeriphClockCmd(Normal_EXTI_Init->RCC_AXXXENR_GPIOxEN,ENABLE);								//��ʱ��
	
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Pin  = GPIO_Pin_4;																							//����3
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IN;																						//ģʽΪ����
	GPIO_InitStruct.GPIO_PuPd = Normal_EXTI_Init->GPIO_PuPd;														//�����������򸡿�
	GPIO_Init(GPIOE,&GPIO_InitStruct);																									//���ýṹ��
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_SYSCFG, ENABLE);
	SYSCFG_EXTILineConfig(Normal_EXTI_Init->EXTI_PortSourceGPIOx,EXTI_PinSource4);
	
	EXTI_InitTypeDef EXTI_InitStructure;
	EXTI_InitStructure.EXTI_Line = EXTI_Line4;
	EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
	EXTI_InitStructure.EXTI_Trigger = Normal_EXTI_Init->EXTI_Trigger;
	EXTI_InitStructure.EXTI_LineCmd = ENABLE;
	EXTI_Init(&EXTI_InitStructure);
	
	NVIC_InitTypeDef NVIC_InitStructure;				
	NVIC_PriorityGroupConfig(Normal_EXTI_Init->NVIC_PriorityGroup);						  				/* ���� NVIC Ϊ���ȼ��� 1 */
	NVIC_InitStructure.NVIC_IRQChannel = EXTI4_IRQn;																		/* �����ж�Դ������ 1 */
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = Normal_EXTI_Init->Prepro;		/* ������ռ���ȼ��� 1 */
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = Normal_EXTI_Init->Subpro;					  /* ���������ȼ��� 1 */
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;																			/* ʹ���ж�ͨ�� */
	NVIC_Init(&NVIC_InitStructure);
}


/*
*ͨ�����ⲿ�ж�9_5
*/


void Common_EXIT9_5_Config(Common_EXTI_Sturct *Normal_EXTI_Init)												//�ⲿ�ж�0
{	
	RCC_AHB1PeriphClockCmd(Normal_EXTI_Init->RCC_AXXXENR_GPIOxEN,ENABLE);								//��ʱ��
	
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Pin  = Normal_EXTI_Init->GPIO_Pin;																							//����3
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IN;																						//ģʽΪ����
	GPIO_InitStruct.GPIO_PuPd = Normal_EXTI_Init->GPIO_PuPd;														//�����������򸡿�
	GPIO_Init(GPIOE,&GPIO_InitStruct);																									//���ýṹ��
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_SYSCFG, ENABLE);
	SYSCFG_EXTILineConfig(Normal_EXTI_Init->EXTI_PortSourceGPIOx,Normal_EXTI_Init->EXTI_PinSourcex);
	
	EXTI_InitTypeDef EXTI_InitStructure;
	EXTI_InitStructure.EXTI_Line = Normal_EXTI_Init->EXTI_Line;
	EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
	EXTI_InitStructure.EXTI_Trigger = Normal_EXTI_Init->EXTI_Trigger;
	EXTI_InitStructure.EXTI_LineCmd = ENABLE;
	EXTI_Init(&EXTI_InitStructure);
	
	NVIC_InitTypeDef NVIC_InitStructure;				
	NVIC_PriorityGroupConfig(Normal_EXTI_Init->NVIC_PriorityGroup);						  				/* ���� NVIC Ϊ���ȼ��� 1 */
	NVIC_InitStructure.NVIC_IRQChannel = EXTI9_5_IRQn;																		/* �����ж�Դ������ 1 */
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = Normal_EXTI_Init->Prepro;		/* ������ռ���ȼ��� 1 */
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = Normal_EXTI_Init->Subpro;					  /* ���������ȼ��� 1 */
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;																			/* ʹ���ж�ͨ�� */
	NVIC_Init(&NVIC_InitStructure);
}

/*
*ͨ�����ⲿ�ж�15_10
*/


void Common_EXIT15_10_Config(Common_EXTI_Sturct *Normal_EXTI_Init)												//�ⲿ�ж�0
{	
	RCC_AHB1PeriphClockCmd(Normal_EXTI_Init->RCC_AXXXENR_GPIOxEN,ENABLE);								//��ʱ��
	
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Pin  = Normal_EXTI_Init->GPIO_Pin;																							//����3
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IN;																						//ģʽΪ����
	GPIO_InitStruct.GPIO_PuPd = Normal_EXTI_Init->GPIO_PuPd;														//�����������򸡿�
	GPIO_Init(GPIOE,&GPIO_InitStruct);																									//���ýṹ��
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_SYSCFG, ENABLE);
	SYSCFG_EXTILineConfig(Normal_EXTI_Init->EXTI_PortSourceGPIOx,Normal_EXTI_Init->EXTI_PinSourcex);
	
	EXTI_InitTypeDef EXTI_InitStructure;
	EXTI_InitStructure.EXTI_Line = Normal_EXTI_Init->EXTI_Line;
	EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
	EXTI_InitStructure.EXTI_Trigger = Normal_EXTI_Init->EXTI_Trigger;
	EXTI_InitStructure.EXTI_LineCmd = ENABLE;
	EXTI_Init(&EXTI_InitStructure);
	
	NVIC_InitTypeDef NVIC_InitStructure;				
	NVIC_PriorityGroupConfig(Normal_EXTI_Init->NVIC_PriorityGroup);						  				/* ���� NVIC Ϊ���ȼ��� 1 */
	NVIC_InitStructure.NVIC_IRQChannel = EXTI15_10_IRQn;																		/* �����ж�Դ������ 1 */
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = Normal_EXTI_Init->Prepro;		/* ������ռ���ȼ��� 1 */
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = Normal_EXTI_Init->Subpro;					  /* ���������ȼ��� 1 */
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;																			/* ʹ���ж�ͨ�� */
	NVIC_Init(&NVIC_InitStructure);
}


//��д�жϷ�����
