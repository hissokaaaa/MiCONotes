
/******************** ��ѧ�Ƽ� **************************
 * ʵ��ƽ̨��������STM32������
 * ��汾  ��ST3.5.0
 * ����    ����ѧ�Ƽ��Ŷ� 
 * �Ա�    ��http://shop102218275.taobao.com/
 * ������ֻ��ѧϰʹ�ã�δ���������ɣ��������������κ���;
 *��Ȩ���У�����ؾ���
**********************************************************************************/


#ifndef __LED_H
#define	__LED_H

#include "stm32f10x.h"

#define LED0_OFF GPIO_SetBits(GPIOE,GPIO_Pin_6);    //PA8����ߵ�ƽ
#define LED0_ON GPIO_ResetBits(GPIOE,GPIO_Pin_6);   //PA8����͵�ƽ

void LED_GPIO_Config(void);   /* LED �˿ڳ�ʼ�� */

#endif /* __LED_H */