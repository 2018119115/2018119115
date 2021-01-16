#include "led.h"
/*
	��������Led_Init
	����������LED�̳ܽ�ʼ������
	�βΣ���
	����ֵ����
	PA11 ----   LED3
	PB14 ----   LED2
	PB11 ----   LED1
	�������
*/
void Led_Init(void)
{
	RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOB|RCC_APB2Periph_GPIOA, ENABLE);	//��ʱ��
	
	GPIO_InitTypeDef GPIO_InitStructure; 						  //����һ���ṹ�����
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_11 |GPIO_Pin_14; 		//LED1��LED2
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz; 				
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		     	//�������
	GPIO_Init(GPIOB, &GPIO_InitStructure);
	
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_11 ;						//LED3	
	GPIO_Init(GPIOA, &GPIO_InitStructure);
	
	
	
	
}

