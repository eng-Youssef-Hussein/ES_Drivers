/*********************************************************************************/
/****************   Auther    : Youssef Hussein              *********************/
/****************   Date      : 27 Feb 2026                  *********************/
/****************   Version.  : 0.1                          *********************/
/****************   File Name : RCC_config.h                 *********************/
/*********************************************************************************/


#ifndef     RCC_CONFIG_H_
#define     RCC_CONFIG_H_ 


 
#define RCC_SYSCLK       RCC_PLL
#if RCC_SYSCLK == RCC_HSE

#define RCC_CLK_BYPASS      RCC_RC_CLK_


#endif // RCC_SYSCLK        RCC_HSE



#endif // RCC_CONFIG_H_