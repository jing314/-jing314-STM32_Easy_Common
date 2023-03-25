
/*
*本文件为基础文件，以后所有模式的IO配置
*均使用本文件函数，引脚配置相关的也均在
*本文件
*/


#ifndef COMMON_GPIO_H
#define COMMON_GPIO_H



#define ON    		 1  
#define OFF  			 0 


/*
*根据所选芯片进行修改，如果型号对应，宏定义为 1
*/



/* 
* normal_GPIO *Norma ：配置所需结构体
* 功能： 推挽输出
*/
void OUT_PP_Config(Common_GPIO_Sturct *Normal_GPIO_Init);


/* 
* normal_GPIO *Norma ：配置所需结构体
* 功能： 开漏输出
*/
void OUT_OP_Config(Common_GPIO_Sturct *Normal_GPIO_Init );


/* 
* normal_GPIO *Norma ：配置所需结构体
功能： 复用推挽输出
*/
void OUT_AFPP_Config(Common_GPIO_Sturct *Normal_GPIO_Init );


/* 
* normal_GPIO *Norma ：配置所需结构体
功能： 复用开漏输出
*/

void OUT_AFOD_Config(Common_GPIO_Sturct *Normal_GPIO_Init );

/* 
* normal_GPIO *Norma ：配置所需结构体
* 功能： 上拉输入
*/
void IN_PU_Config(Common_GPIO_Sturct *Normal_GPIO_Init );
	



/* 
* normal_GPIO *Norma ：配置所需结构体
* 功能： 下拉输入
*/
void IN_PD_Config(Common_GPIO_Sturct *Normal_GPIO_Init );


/* 
* normal_GPIO *Norma ：配置所需结构体
* 功能： 浮空输入
*/
void IN_NUD_Config(Common_GPIO_Sturct *Normal_GPIO_Init );


/* 
* normal_GPIO *Norma ：配置所需结构体
* 功能： 模拟输入
*/
void IN_ADC_Config(Common_GPIO_Sturct *Normal_GPIO_Init);

/*
* GPIO_TypeDef *GPIOx          ：引脚组号GPIOX
* uint16_t GPIO_Pin		        ：引脚号GPIO_Pin
* 功能： 输入后扫描
*/

uint8_t IN_Sanf(GPIO_TypeDef *GPIOx,uint16_t GPIO_Pin);
#endif


