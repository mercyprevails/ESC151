#include <stdio.h>
#include <math.h>
#define PI acos(-1.0)
int main(void)
{
	double L, g = 32.2, T = 1, MTH, RT; // Length, G, Time, Math Vars and Root.
	MTH = 2 * PI;
	RT = sqrt(1 / MTH);
	L = g * RT;
	printf("The pendulum must have a length of %.2f cm in \n", L);// Begin output
	printf("order to have a period of 1 second.\n");
	return(0);
}
