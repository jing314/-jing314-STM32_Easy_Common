## 这是一个通用型的STM32系列库，其搭配相关固件库进行工作。

---

> 我把STM32上的外设配置结构体进行了整合，单个功能只需要配置一个结构体，目前支持~~STM32F103~~ （GPIO完善，其余待补充）STM32F07 只需要对Common_Header.h相关宏定义进行即可

---

目前完成的都有：

- **Common_ETTI.c** 	

  > Common_ETTI.h 用于存放通用中断与相关函数  

- **Common_GPIO.c**	

  > Common_GPIO.h 用于存放GPIO的配置与相关函数  

- **Common_USART.c**	

  > Common_USART 用于存放USART的配置与相关函数  

- **Common_Header.h**	

  > 存放本库所有可能用到的头文件  

- **Common_Struct.h**	

  > 存放本库所有可能使用的结构体  

- **Common_TIM.c**

  > Common_TIM用于存放定时器的配置与相关函数  

- **Common_PWM.c**

> Common_PWM用于存放PWM的配置与相关函数  





一般来说，Common_Struct.h	Common_Header.h   Common_XXX.c

三者为**最小单元组**，为了增强其可移植性，Common_XXX.c 之间相互独立

