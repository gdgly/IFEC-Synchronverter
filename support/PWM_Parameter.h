#ifndef PWM_PARAMETER_H_
#define PWM_PARAMETER_H_
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//PWM_CoreCalculate.c相关参数
#define Vdc 380
#define Vac 230
#define pie 3.14159
#define T 0.0001 //PWM频率和运算周期
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//PWM_ePWM.c相关参数
#define EPwm_TIMER_TBPRD1 1000 //PWM频率设置
#define EPwm_TIMER_TBPRD2 7500
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//PWM_Main.c相关参数
#define k 1
#define PWMS_FRC_DISABLE 0x0000 //宏定义，禁止ePWM模块强制功能
#define PWMS_ALBL 0x0005 //宏定义，强制A低电平，B低电平
#define PWMS_AHBH 0x000A //宏定义，强制A高电平，B高电平
#define PWMS_AHBL 0x0006 //宏定义，强制A高电平，B低电平
#define PWMS_ALBH 0x0009 //宏定义，强制A低电平，B高电平
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//PWM_Timer.c相关参数
#define Timer0 1000000 //1000000是1s
#endif /* PWM_PARAMETER_H_ */
