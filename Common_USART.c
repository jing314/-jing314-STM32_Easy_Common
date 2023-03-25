#include "Common_Header.h"

void Common_Usart1_Config(Common_USART_Sturct* Normal_USART_Init)  																	//串口初始化
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART1,ENABLE); 																					  //开启串口时钟
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA,ENABLE);																							//开启对应GPOIO时钟
	GPIO_PinAFConfig(GPIOA,GPIO_PinSource9,GPIO_AF_USART1);																						//GPIO复用函数
	GPIO_PinAFConfig(GPIOA,GPIO_PinSource10,GPIO_AF_USART1);	
	
	GPIO_InitTypeDef GPIO_InitStruct;                     					  		  													//初始化GPIO结构体
	GPIO_InitStruct.GPIO_Pin = GPIO_Pin_9|GPIO_Pin_10;  
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_AF;              																				  	//复用模式
	GPIO_InitStruct.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStruct.GPIO_PuPd = GPIO_PuPd_UP;
	GPIO_Init(GPIOA,&GPIO_InitStruct);

	USART_InitTypeDef USART_InitStruct;        																											 //串口结构体初始化
	USART_InitStruct.USART_BaudRate = Normal_USART_Init->USART_BaudRate;
	USART_InitStruct.USART_WordLength = Normal_USART_Init->USART_WordLength;
	USART_InitStruct.USART_StopBits = Normal_USART_Init->USART_StopBits;
	USART_InitStruct.USART_Parity = Normal_USART_Init->USART_Parity;
	USART_InitStruct.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
	USART_InitStruct.USART_Mode = USART_Mode_Rx|USART_Mode_Tx;
	USART_Init(USART1,&USART_InitStruct);	
	USART_ITConfig(USART1, USART_IT_RXNE, ENABLE);																									//开启串口中断
	
	NVIC_InitTypeDef NVIC_InitStructure;
																																																	//Usart1 NVIC 配置
	NVIC_InitStructure.NVIC_IRQChannel = USART1_IRQn;
	NVIC_PriorityGroupConfig(Normal_USART_Init->NVIC_PriorityGroup);						  										// 配置 NVIC 为优先级组
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority=Normal_USART_Init->Prepro;									//抢占优先级 
	NVIC_InitStructure.NVIC_IRQChannelSubPriority =Normal_USART_Init->Subpro; 											//响应优先级 
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE; 																								//IRQ 通道使能
	NVIC_Init(&NVIC_InitStructure); 																																//根据指定的参数初始化 VIC 寄存器、
	USART_Cmd(USART1, ENABLE); 																																			//使能串口 
}


void Common_Usart2_Config(Common_USART_Sturct* Normal_USART_Init)  																	//串口初始化
{
	RCC_APB2PeriphClockCmd(RCC_APB1ENR_USART2EN,ENABLE); 																					  //开启串口时钟
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA,ENABLE);																							//开启对应GPOIO时钟
	GPIO_PinAFConfig(GPIOA,GPIO_PinSource2,GPIO_AF_USART1);																						//GPIO复用函数
	GPIO_PinAFConfig(GPIOA,GPIO_PinSource3,GPIO_AF_USART1);	
	
	GPIO_InitTypeDef GPIO_InitStruct;                     					  		  													//初始化GPIO结构体
	GPIO_InitStruct.GPIO_Pin = GPIO_Pin_2|GPIO_Pin_3;  
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_AF;              																				  	//复用模式
	GPIO_InitStruct.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStruct.GPIO_PuPd = GPIO_PuPd_UP;
	GPIO_Init(GPIOA,&GPIO_InitStruct);

	USART_InitTypeDef USART_InitStruct;        																											 //串口结构体初始化
	USART_InitStruct.USART_BaudRate = Normal_USART_Init->USART_BaudRate;
	USART_InitStruct.USART_WordLength = Normal_USART_Init->USART_WordLength;
	USART_InitStruct.USART_StopBits = Normal_USART_Init->USART_StopBits;
	USART_InitStruct.USART_Parity = Normal_USART_Init->USART_Parity;
	USART_InitStruct.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
	USART_InitStruct.USART_Mode = USART_Mode_Rx|USART_Mode_Tx;
	USART_Init(USART1,&USART_InitStruct);	
	USART_ITConfig(USART1, USART_IT_RXNE, ENABLE);																									//开启串口中断
	
	NVIC_InitTypeDef NVIC_InitStructure;
																																																	//Usart1 NVIC 配置
	NVIC_InitStructure.NVIC_IRQChannel = USART2_IRQn;
	NVIC_PriorityGroupConfig(Normal_USART_Init->NVIC_PriorityGroup);						  										// 配置 NVIC 为优先级组
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority=Normal_USART_Init->Prepro;									//抢占优先级 
	NVIC_InitStructure.NVIC_IRQChannelSubPriority =Normal_USART_Init->Subpro; 											//响应优先级 
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE; 																								//IRQ 通道使能
	NVIC_Init(&NVIC_InitStructure); 																																//根据指定的参数初始化 VIC 寄存器、
	USART_Cmd(USART1, ENABLE); 																																			//使能串口 
}




//发送一个字符
void Usart_SendByte(USART_TypeDef *USARTx,uint8_t ch)
{
	USART_SendData(USARTx,ch);																	// 发送一个字符数据到USART
	while(USART_GetFlagStatus(USARTx,USART_FLAG_TXE) == RESET);//等待发送完成

}


/*****************  发送字符串 **********************/
void Usart_SendString( USART_TypeDef * USARTx, char *str)
{
	unsigned int k=0;
  do 
  {
      Usart_SendByte( USARTx, *(str + k) );
      k++;
  } while(*(str + k)!='\0');
  
  /* 等待发送完成 */
  while(USART_GetFlagStatus(USARTx,USART_FLAG_TC)==RESET)
  {}
}

	/* 重定向c库中的printf函数到串口 */
int fputc(int ch, FILE *f)
{
	/* 发送一字节数据到串口 */
		USART_SendData(DEBUG_USART, (uint8_t) ch);
		
		/* 等待发送完成 */
		while (USART_GetFlagStatus(DEBUG_USART, USART_FLAG_TXE) == RESET);		
	
		return (ch);
}

//重构scanf函数
int fgetc(FILE *f)
{
		/* 等待串口输入完成 */
		while (USART_GetFlagStatus(DEBUG_USART, USART_FLAG_RXNE) == RESET);

		return (int)USART_ReceiveData(DEBUG_USART);
}
/********************/
