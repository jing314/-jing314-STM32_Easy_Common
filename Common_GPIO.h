
/*
*���ļ�Ϊ�����ļ����Ժ�����ģʽ��IO����
*��ʹ�ñ��ļ�����������������ص�Ҳ����
*���ļ�
*/


#ifndef COMMON_GPIO_H
#define COMMON_GPIO_H



#define ON    		 1  
#define OFF  			 0 


/*
*������ѡоƬ�����޸ģ�����ͺŶ�Ӧ���궨��Ϊ 1
*/



/* 
* normal_GPIO *Norma ����������ṹ��
* ���ܣ� �������
*/
void OUT_PP_Config(Common_GPIO_Sturct *Normal_GPIO_Init);


/* 
* normal_GPIO *Norma ����������ṹ��
* ���ܣ� ��©���
*/
void OUT_OP_Config(Common_GPIO_Sturct *Normal_GPIO_Init );


/* 
* normal_GPIO *Norma ����������ṹ��
���ܣ� �����������
*/
void OUT_AFPP_Config(Common_GPIO_Sturct *Normal_GPIO_Init );


/* 
* normal_GPIO *Norma ����������ṹ��
���ܣ� ���ÿ�©���
*/

void OUT_AFOD_Config(Common_GPIO_Sturct *Normal_GPIO_Init );

/* 
* normal_GPIO *Norma ����������ṹ��
* ���ܣ� ��������
*/
void IN_PU_Config(Common_GPIO_Sturct *Normal_GPIO_Init );
	



/* 
* normal_GPIO *Norma ����������ṹ��
* ���ܣ� ��������
*/
void IN_PD_Config(Common_GPIO_Sturct *Normal_GPIO_Init );


/* 
* normal_GPIO *Norma ����������ṹ��
* ���ܣ� ��������
*/
void IN_NUD_Config(Common_GPIO_Sturct *Normal_GPIO_Init );


/* 
* normal_GPIO *Norma ����������ṹ��
* ���ܣ� ģ������
*/
void IN_ADC_Config(Common_GPIO_Sturct *Normal_GPIO_Init);

/*
* GPIO_TypeDef *GPIOx          ���������GPIOX
* uint16_t GPIO_Pin		        �����ź�GPIO_Pin
* ���ܣ� �����ɨ��
*/

uint8_t IN_Sanf(GPIO_TypeDef *GPIOx,uint16_t GPIO_Pin);
#endif


