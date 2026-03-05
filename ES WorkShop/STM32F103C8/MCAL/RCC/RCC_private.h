/*********************************************************************************/
/****************   Auther    : Youssef Hussein              *********************/
/****************   Date      : 27 Feb 2026                  *********************/
/****************   Version.  : 0.1                          *********************/
/****************   File Name : RCC_privete.h                *********************/
/*********************************************************************************/


#ifndef     RCC_PRIVATE_H_
#define     RCC_PRIVATE_H_ 

#define     RCC_CR              (*(volatile u32 *)0x40021000+0x00)
#define     RCC_CFGR            (*(volatile u32 *)0x40021000+0x04)
#define     RCC_CIR             (*(volatile u32 *)0x40021000+0x08)
#define     RCC_APB2RSTR        (*(volatile u32 *)0x40021000+0x0C)
#define     RCC_APB1RSTR        (*(volatile u32 *)0x40021000+0x10)
#define     RCC_AHBENR          (*(volatile u32 *)0x40021000+0x14)
#define     RCC_APB2ENR         (*(volatile u32 *)0x40021000+0x18)
#define     RCC_APB1ENR         (*(volatile u32 *)0x40021000+0x1C)
#define     RCC_BDCR            (*(volatile u32 *)0x40021000+0x20)
#define     RCC_CSR             (*(volatile u32 *)0x40021000+0x24)


#define RCC_CR_HSION    0
#define RCC_CR_HSEON    16
#define RCC_CR_HSEBYP   18
#define RCC_CR_HSERDY   17
#define RCC_CR_HSIRDY   1
#define RCC_CR_PLLON    24
#define RCC_CR_PLLRDY   25



#define RCC_HSI     0
#define RCC_HSE     1
#define RCC_PLL     2

#define RCC_RC_CLK_     1
#define RCC_CRYSTAL_CLK_        0

#endif // RCC_PRIVATE_H_