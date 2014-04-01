#include <detpic32.h>

int main(void){

	T3CONbits.TCKPS = 2; // 1:256 prescaler (i.e fin = 78,125 KHz)

	PR3 = 49999; // Fout = 20MHz / (32 * (39061,5 + 1)) = 2 Hz
	TMR3 = 0; // Reset timer T3 count register
	T3CONbits.TON = 1; // Enable timer T3 (must be the last command of the // timer configuration sequence)

	OC1CONbits.OCM = 6;
	OC1CONbits.OCTSEL = 1;

	OC1RS = 12500;

	OC1CONbits.ON = 1;
	while(1);
	return 0;
}

void setPWM(unsigned int dutyCycle){

	OC1RS = (PR3*dutyCycle)/100;

}