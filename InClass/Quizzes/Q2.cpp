#include <stdio.h>
#include <math.h>
int main(void)
{
	double cIN = 7110, cFT, cCM;
	cFT = (cIN / 12 / 12 / 12);
	cCM = (cIN * 16.387064);
	printf("volume in cubic feet: %.3lf \n", cFT);
	printf("volume in cubic cm: %.3lf \n", cCM);
	return(0);
}
