#include "HMI.h"

//extern uint8_t aRxBuffer[6];

uint8_t end[3] = {0xff,0xff,0xff};
uint8_t busy = 0;
void stop()		        //停止位
{		 
	 HAL_UART_Transmit( &huart1, (uint8_t *)end , 3,0xffff);
} 

void display(uint8_t *buffer)
{
//	for(int i=0;i<5;i++)
//	{
//		if(p[i]==0)
//		{
//			printf("p0.pic=0");
//			stop();
//		}else
//		{
//			printf("p0.pic=3");
//			stop();
//		}
//	}	
	
	//零号停车位
	if(buffer[0]==busy)
	{
		printf("p0.pic=0");
		stop();
	}else
	{
		printf("p0.pic=3");
		stop();
	}
	
	//一号停车位
	if(buffer[1]==busy)
	{
		printf("p1.pic=0");
		stop();
	}else
	{
		printf("p1.pic=3");
		stop();
	}	
	
	//二号停车位
	if(buffer[2]==busy)
	{
		printf("p2.pic=0");
		stop();
	}else
	{
		printf("p2.pic=3");
		stop();
	}	

	//三号停车位
	if(buffer[3]==busy)
	{
		printf("p3.pic=2");
		stop();
	}else
	{
		printf("p3.pic=3");
		stop();
	}	

	//四号停车位
	if(buffer[4]==busy)
	{
		printf("p4.pic=2");
		stop();
	}else
	{
		printf("p4.pic=3");
		stop();
	}	
	
	//五号停车位
	if(buffer[5]==busy)
	{
		printf("p5.pic=2");
		stop();
	}else
	{
		printf("p5.pic=3");
		stop();
	}	
}
