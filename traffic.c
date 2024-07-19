//LED
#include<LPC214X.h>
#include<stdio.h>
#include<stdlib.h>
void delay(unsigned int count);
unsigned int j;
int main()
{
  IODIR0|=(1<<4);
	 IODIR0|=(1<<5);
	IODIR0|=(1<<6);

for(j=1;j<=3;j++)
  {
    IOSET0|=(1<<4);
		delay (200000);
		IOCLR0|=(1<<4);
		IOSET0|=(1<<5);
		delay (200000);
		IOCLR0|=(1<<5);
		IOSET0|=(1<<6);
		delay (200000);
		IOCLR0|=(1<<6);
	}	
	while(1){ 
	
	}
		return 0;
} 
void delay(unsigned int count){
	unsigned int i;
	for(i=0;i<count;i++);
}