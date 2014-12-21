#ifndef PWM_FUNCTION_H_
#define PWM_FUNCTION_H_
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//�Դ���غ���
float32 sqrt(float32 input); //�������� FPU
float32 sin(float32 input); //��������FPU
float32 cos(float32 input); //��������FPU
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//PWM_ADC.c��غ���
void ADCInit(void);
void ReadADC(unsigned int *p);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//PWM_CoreCalculate.c��غ���
void CalculateInit(void);
void vg_sample(void);
void i_sample(void);
void P_cal(void);
void Q_cal(void);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//PWM_ePWM.c��غ���
void InitEPwm1(void);
void InitEPwm2(void);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//PWM_FIR.c��غ���
void InitFIR(void);
//�˲�����
float32 TeFIR_cal(float32 input);
float32 QFIR_cal(float32 input);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//PWM_Main.c��غ���
interrupt void epwm1_isr(void); //epwm1�ж�
//interrupt void cpu_timer0_isr(void); //Timer0�ж�
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//PWM_SCI.c��غ���
void InitSCI(void);
void sci_send(Uint16 input);
interrupt void sciaTx_isr(void);
interrupt void sciaRx_isr(void);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//PWM_SupportCalculate.c��غ���
//���������йغ���
void TransData(float32 input);
Uint16 TransControl(void);
//��������
float32 e_RMS(float32 input);


#endif /* PWM_FUNCTION_H_ */