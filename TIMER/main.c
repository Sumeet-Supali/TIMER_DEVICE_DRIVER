#include <LPC214X.H>

void DELAY(void);

int main(){
		IO0DIR = 0xFFFFFFFF;
		while(1){
			IO0SET = 0XFFFFFFFF;
			DELAY();
			IO0CLR = 0XFFFFFFFF;
		}	
}

void DELAY(void){
	T0MR0 = 15000000;
	T0MCR = 0X00000004;
	T0TCR = 1;
	while(T0TC != T0MR0);
	T0TC = 0;
}