#include "Common_Header.h"

void Common_Usart1_Config(Common_USART_Sturct* Normal_USART_Init)  																	//���ڳ�ʼ��
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART1,ENABLE); 																					  //��������ʱ��
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA,ENABLE);																							//������ӦGPOIOʱ��
	GPIO_PinAFConfig(GPIOA,GPIO_PinSource9,GPIO_AF_USART1);																						//GPIO���ú���
	GPIO_PinAFConfig(GPIOA,GPIO_PinSource10,GPIO_AF_USART1);	
	
	GPIO_InitTypeDef GPIO_InitStruct;                     					  		  													//��ʼ��GPIO�ṹ��
	GPIO_InitStruct.GPIO_Pin = GPIO_Pin_9|GPIO_Pin_10;  
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_AF;              																				  	//����ģʽ
	GPIO_InitStruct.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStruct.GPIO_PuPd = GPIO_PuPd_UP;
	GPIO_Init(GPIOA,&GPIO_InitStruct);

	USART_InitTypeDef USART_InitStruct;        																											 //���ڽṹ���ʼ��
	USART_InitStruct.USART_BaudRate = Normal_USART_Init->USART_BaudRate;
	USART_InitStruct.USART_WordLength = Normal_USART_Init->USART_WordLength;
	USART_InitStruct.USART_StopBits = Normal_USART_Init->USART_StopBits;
	USART_InitStruct.USART_Parity = Normal_USART_Init->USART_Parity;
	USART_InitStruct.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
	USART_InitStruct.USART_Mode = USART_Mode_Rx|USART_Mode_Tx;
	USART_Init(USART1,&USART_InitStruct);	
	USART_ITConfig(USART1, USART_IT_RXNE, ENABLE);																									//���������ж�
	
	NVIC_InitTypeDef NVIC_InitStructure;
																																																	//Usart1 NVIC ����
	NVIC_InitStructure.NVIC_IRQChannel = USART1_IRQn;
	NVIC_PriorityGroupConfig(Normal_USART_Init->NVIC_PriorityGroup);						  										// ���� NVIC Ϊ���ȼ���
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority=Normal_USART_Init->Prepro;									//��ռ���ȼ� 
	NVIC_InitStructure.NVIC_IRQChannelSubPriority =Normal_USART_Init->Subpro; 											//��Ӧ���ȼ� 
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE; 																								//IRQ ͨ��ʹ��
	NVIC_Init(&NVIC_InitStructure); 																																//����ָ���Ĳ�����ʼ�� VIC �Ĵ�����
	USART_Cmd(USART1, ENABLE); 																																			//ʹ�ܴ��� 
}


void Common_Usart2_Config(Common_USART_Sturct* Normal_USART_Init)  																	//���ڳ�ʼ��
{
	RCC_APB2PeriphClockCmd(RCC_APB1ENR_USART2EN,ENABLE); 																					  //��������ʱ��
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA,ENABLE);																							//������ӦGPOIOʱ��
	GPIO_PinAFConfig(GPIOA,GPIO_PinSource2,GPIO_AF_USART1);																						//GPIO���ú���
	GPIO_PinAFConfig(GPIOA,GPIO_PinSource3,GPIO_AF_USART1);	
	
	GPIO_InitTypeDef GPIO_InitStruct;                     					  		  													//��ʼ��GPIO�ṹ��
	GPIO_InitStruct.GPIO_Pin = GPIO_Pin_2|GPIO_Pin_3;  
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_AF;              																				  	//����ģʽ
	GPIO_InitStruct.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStruct.GPIO_PuPd = GPIO_PuPd_UP;
	GPIO_Init(GPIOA,&GPIO_InitStruct);

	USART_InitTypeDef USART_InitStruct;        																											 //���ڽṹ���ʼ��
	USART_InitStruct.USART_BaudRate = Normal_USART_Init->USART_BaudRate;
	USART_InitStruct.USART_WordLength = Normal_USART_Init->USART_WordLength;
	USART_InitStruct.USART_StopBits = Normal_USART_Init->USART_StopBits;
	USART_InitStruct.USART_Parity = Normal_USART_Init->USART_Parity;
	USART_InitStruct.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
	USART_InitStruct.USART_Mode = USART_Mode_Rx|USART_Mode_Tx;
	USART_Init(USART1,&USART_InitStruct);	
	USART_ITConfig(USART1, USART_IT_RXNE, ENABLE);																									//���������ж�
	
	NVIC_InitTypeDef NVIC_InitStructure;
																																																	//Usart1 NVIC ����
	NVIC_InitStructure.NVIC_IRQChannel = USART2_IRQn;
	NVIC_PriorityGroupConfig(Normal_USART_Init->NVIC_PriorityGroup);						  										// ���� NVIC Ϊ���ȼ���
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority=Normal_USART_Init->Prepro;									//��ռ���ȼ� 
	NVIC_InitStructure.NVIC_IRQChannelSubPriority =Normal_USART_Init->Subpro; 											//��Ӧ���ȼ� 
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE; 																								//IRQ ͨ��ʹ��
	NVIC_Init(&NVIC_InitStructure); 																																//����ָ���Ĳ�����ʼ�� VIC �Ĵ�����
	USART_Cmd(USART1, ENABLE); 																																			//ʹ�ܴ��� 
}




//����һ���ַ�
void Usart_SendByte(USART_TypeDef *USARTx,uint8_t ch)
{
	USART_SendData(USARTx,ch);																	// ����һ���ַ����ݵ�USART
	while(USART_GetFlagStatus(USARTx,USART_FLAG_TXE) == RESET);//�ȴ��������

}


/*****************  �����ַ��� **********************/
void Usart_SendString( USART_TypeDef * USARTx, char *str)
{
	unsigned int k=0;
  do 
  {
      Usart_SendByte( USARTx, *(str + k) );
      k++;
  } while(*(str + k)!='\0');
  
  /* �ȴ�������� */
  while(USART_GetFlagStatus(USARTx,USART_FLAG_TC)==RESET)
  {}
}

	/* �ض���c���е�printf���������� */
int fputc(int ch, FILE *f)
{
	/* ����һ�ֽ����ݵ����� */
		USART_SendData(DEBUG_USART, (uint8_t) ch);
		
		/* �ȴ�������� */
		while (USART_GetFlagStatus(DEBUG_USART, USART_FLAG_TXE) == RESET);		
	
		return (ch);
}

//�ع�scanf����
int fgetc(FILE *f)
{
		/* �ȴ������������ */
		while (USART_GetFlagStatus(DEBUG_USART, USART_FLAG_RXNE) == RESET);

		return (int)USART_ReceiveData(DEBUG_USART);
}
/********************/
