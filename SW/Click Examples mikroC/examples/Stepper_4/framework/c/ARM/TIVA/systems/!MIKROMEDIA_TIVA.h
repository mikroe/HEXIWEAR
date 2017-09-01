#ifdef MIKROMEDIA_TIVA

#define __MIKROBUS1_AN_PIN_PORT         E_AHB
#define __MIKROBUS1_AN_PIN          		3
#define __MIKROBUS1_RST_PIN_PORT        C_AHB
#define __MIKROBUS1_RST_PIN         		1
#define __MIKROBUS1_CS_PIN_PORT         C_AHB
#define __MIKROBUS1_CS_PIN          		3
#define __MIKROBUS1_PWM_PIN_PORT        H_AHB
#define __MIKROBUS1_PWM_PIN         		4
#define __MIKROBUS1_PIN_PIN_PORT        H_AHB
#define __MIKROBUS1_INT_PIN         		0
#define __MIKROBUS2_AN_PIN_PORT         E_AHB
#define __MIKROBUS2_AN_PIN          		2
#define __MIKROBUS2_RTS_PIN_PORT        C_AHB
#define __MIKROBUS2_RST_PIN         		2
#define __MIKROBUS2_CS_PIN_PORT         B_AHB
#define __MIKROBUS2_CS_PIN          		5
#define __MIKROBUS2_PWM_PIN_PORT        H_AHB
#define __MIKROBUS2_PWM_PIN         		5
#define __MIKROBUS2_INT_PIN_PORT        H_AHB
#define __MIKROBUS2_INT_PIN         		1

#define MIKROBUS1_PIN_AN_INPUT          GPIO_PORTE_AHB_DATA.B3
#define MIKROBUS1_PIN_AN_OUTPUT         GPIO_PORTE_AHB_DATA.B3
#define MIKROBUS1_PIN_RST_INPUT         GPIO_PORTC_AHB_DATA.B1
#define MIKROBUS1_PIN_RST_OUTPUT        GPIO_PORTC_AHB_DATA.B1
#define MIKROBUS1_PIN_CS_INPUT          GPIO_PORTC_AHB_DATA.B3
#define MIKROBUS1_PIN_CS_OUTPUT         GPIO_PORTC_AHB_DATA.B3
#define MIKROBUS1_PIN_PWM_INPUT         GPIO_PORTH_AHB_DATA.B4
#define MIKROBUS1_PIN_PWM_OUTPUT        GPIO_PORTH_AHB_DATA.B4
#define MIKROBUS1_PIN_INT_INPUT         GPIO_PORTH_AHB_DATA.B0
#define MIKROBUS1_PIN_INT_OUTPUT        GPIO_PORTH_AHB_DATA.B0

#define MIKROBUS2_PIN_AN_INPUT          GPIO_PORTE_AHB_DATA.B2
#define MIKROBUS2_PIN_AN_OUTPUT         GPIO_PORTE_AHB_DATA.B2
#define MIKROBUS2_PIN_RST_INPUT         GPIO_PORTC_AHB_DATA.B2
#define MIKROBUS2_PIN_RST_OUTPUT        GPIO_PORTC_AHB_DATA.B2
#define MIKROBUS2_PIN_CS_INPUT          GPIO_PORTB_AHB_DATA.B5
#define MIKROBUS2_PIN_CS_OUTPUT         GPIO_PORTB_AHB_DATA.B5
#define MIKROBUS2_PIN_PWM_INPUT         GPIO_PORTH_AHB_DATA.B5
#define MIKROBUS2_PIN_PWM_OUTPUT        GPIO_PORTH_AHB_DATA.B5
#define MIKROBUS2_PIN_INT_INPUT         GPIO_PORTA_AHB_DATA.B1
#define MIKROBUS2_PIN_INT_OUTPUT        GPIO_PORTA_AHB_DATA.B1

#endif