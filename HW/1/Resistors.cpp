#include <stdio.h>
#include <math.h>
int main(void)
{
	double R1 = 100, R2 = 200, R3 = 300, REQ, MTH; // Resistors 1-3, Equivalent Resistance, Math Variable
	MTH = (1 / R1) + (1 / R2) + (1 / R3);
	REQ = 1 / MTH;
	printf("There are three resistors in a parallel circuit:\n");// Begin output
	printf("The first has a resistance of %.2f ohms, \n", R1);
	printf("The second has a resistance of %.2f ohms, \n", R2);
	printf("And the third has a resistance of %.2f ohms. \n", R3);
	printf("=-=-=-=-=-=-=-= \n", R3);
	printf("The equivalent resistance of all resistors is %.3lf ohms. \n", REQ);
	return(0);
}
