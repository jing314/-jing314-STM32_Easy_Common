#ifndef _COMMON_STRUCT_H
#define _COMMON_STRUCT_H

/* 
���ڵ�Ƭ���ٶ�Ҫ��ͬ���ɵ����������ٶ�ֵ��
*/

#define STM32F10x_SPEED    GPIO_Speed_50MHz
#define STM32F4xx_SPEED    GPIO_Speed_100MHz

/*
* uint32_t RCC_AXXPeriph_GPIOX  ����ͬоƬ������ʱ����ȷ����ʱ�������磺RCC_APB2Periph_GPIOA�ȵ�

* GPIO_TypeDef* GPIOX					  �������������磺GPIOA��GPIOB.....

* uint16_t GPIO_PIN							�����ź��磺GPIO_PIN_1,GPIO_PIN_2......
*/
typedef struct 
{
	uint32_t RCC_AXXPeriph_GPIOX; //ʱ��ʹ��
	
	GPIO_TypeDef *GPIOX;					//GPIOX
	
	uint16_t GPIO_PIN;						//PIN
	
}Common_GPIO_Sturct;


/*

*	uint32_t RCC_AXXXENR_GPIOxEN;					//��ӦGPIO���磺GPIOA������
	
*	uint8_t EXTI_PortSourceGPIOx;					//��ӦGPIO���磺GPIOA������
	
*	uint16_t GPIO_Pin;                    //��ӦGPIO�����磺GPIO_PIN_1������ʱʹ�ã�һ���������ã�
	
*	uint32_t EXTI_Line;										//��Ӧ�ж��ߣ�����ʱʹ�ã�һ���������ã�
	
*	uint8_t EXTI_PinSourcex;							//�ж����ӵ�GPIO���ţ�����ʱʹ�ã�һ���������ã�
	
*	GPIOPuPd_TypeDef GPIO_PuPd;						//����ģʽ
	
*	EXTITrigger_TypeDef EXTI_Trigger; 		//�жϴ���ģʽ
	
*	uint32_t NVIC_PriorityGroup;					//���ȼ�����
	
*	uint8_t  Prepro;											//��ռ���ȼ�
	
*	uint8_t  Subpro;											//�����ȼ�

*/




	typedef struct
{                                                                                  

	
	uint32_t RCC_AXXXENR_GPIOxEN;					//��ӦGPIO���磺GPIOA������
	
	uint8_t EXTI_PortSourceGPIOx;					//��ӦGPIO���磺GPIOA������
	
	uint16_t GPIO_Pin;                    //��ӦGPIO�����磺GPIO_PIN_1
	
	uint32_t EXTI_Line;										//��Ӧ�ж���
	
	uint8_t EXTI_PinSourcex;							//�ж����ӵ�GPIO����
	
	GPIOPuPd_TypeDef GPIO_PuPd;						//����ģʽ
	
	EXTITrigger_TypeDef EXTI_Trigger; 		//�жϴ���ģʽ
	
	uint32_t NVIC_PriorityGroup;					//���ȼ�����
	
	uint8_t  Prepro;											//��ռ���ȼ�
	
	uint8_t  Subpro;											//�����ȼ�
	
}Common_EXTI_Sturct;


#endif


