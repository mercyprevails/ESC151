#include <stdio.h>
int main(void)
{
	double req, r1 = 100, r2 = 200, r3 = 300;
	req = (1/((1/r1)+(1/r2)))+r3;
	printf("The equivalent resistance of all 3 resistors is %.3lf ohms \n", req);
	return(0);
}
