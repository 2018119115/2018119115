#include "main.h"
#include <string.h>



void delay_ms(u32 ms)   //720000
{
	while(ms--);		//72MHZ    1/72us
}


int main(void)
{
	Led_Init();
	Key_Init();
	Usart1_Pint_Init(115200);
	printf("hello world\r\n");
	Usart1_Send_Str((u8 *)"dkwodkwo\r\n");
	while(1)
	{
		
		switch(Key_Scan())
		{
			case 1:LED1_ON;LED2_OFF;LED3_OFF; break;
			case 2:LED2_ON;LED1_OFF;LED3_OFF; break;
			case 3:LED3_ON;LED1_OFF;LED2_OFF; break;
		}
	}
}

