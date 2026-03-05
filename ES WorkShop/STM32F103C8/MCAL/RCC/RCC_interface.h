/*********************************************************************************/
/****************   Auther    : Youssef Hussein              *********************/
/****************   Date      : 27 Feb 2026                  *********************/
/****************   Version.  : 0.1                          *********************/
/****************   File Name : RCC_interface.h              *********************/
/*********************************************************************************/


#ifndef     RCC_INTERFACE_H_
#define     RCC_INTERFACE_H_ 


#define RCC_AHB                 0
#define RCC_APB1                1
#define RCC_APB2                2


#define RCC_AHB_DMA1EN          0
#define RCC_AHB_DMA2EN          1
#define RCC_AHB_SRAMEN          2
#define RCC_AHB_FLITFEN         4
#define RCC_AHB_CRCEN           6
#define RCC_AHB_OTGFSEN         12
#define RCC_AHB_ETHMACEN        14
#define RCC_AHB_ETHMACTXEN      15
#define RCC_AHN_ETHMACRXEN      16









#define RCC_APB1_TIM2EN         0
#define RCC_APB1_TIM3EN         1
#define RCC_APB1_TIM4EN         2
#define RCC_APB1_TIM5EN         3
#define RCC_APB1_TIM6EN         4
#define RCC_APB1_TIM7EN         5
#define RCC_APB1_WWDGEN         11
#define RCC_APB1_SPI2EN         14
#define RCC_APB1_SPI3EN         15
#define RCC_APB1_USART2EN       17
#define RCC_APB1_USART3EN       18
#define RCC_APB1_UART4EN        19
#define RCC_APB1_UART5EN        20
#define RCC_APB1_I2C1EN         21
#define RCC_APB1_I2C2EN         22
#define RCC_APB1_CAN1EN         25
#define RCC_APB1_CAN2EN         26
#define RCC_APB1_BKPEN          27
#define RCC_APB1_PWREN          28
#define RCC_APB1_DACEN          29







/**< APB2 peripheral clock enable register (RCC_APB2ENR) */


#define RCC_APB2_AFIOEN         0       //Alternate function I/O clock enable
#define RCC_APB2_IOPAEN         2       //I/O port A clock enable
#define RCC_APB2_IOPBEN         3       //I/O port B clock enable
#define RCC_APB2_IOPCEN         4       //I/O port C clock enable
#define RCC_APB2_IOPDEN         5       //I/O port D clock enable
#define RCC_APB2_IOPEEN         6.      //I/O port E clock enable
#define RCC_APB2_ADC1EN         9       //ADC 1 interface clock enable
#define RCC_APB2_ADC2EN         10      //ADC 2 interface clock enable
#define RCC_APB2_TIM1EN         11      //TIM1 Timer clock enable
#define RCC_APB2_SPI1EN         12      //SPI 1 clock enable
#define RCC_APB2_USART1EN       14      //USART1 clock enable






Std_ReturnType Rcc_InitSysClock();
Std_ReturnType Rcc_EnablePeripheral(u8 Copy_PeripheralId , u8 Copy_BusId);
Std_ReturnType Rcc_DisablePeripheral(u8 Copy_PeripheralId , u8 Copy_BusId);


#endif // RCC_INTERFACE_H_