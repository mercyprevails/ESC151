#include <stdio.h>
#include <math.h>
#define PI 4*atan(1)
int main(void)
{
	double r, SA, V;
	printf("   Radius       SA       Volume \n\n");
	for (r = 1; r <= 10; r++)
	{
		SA = PI * 4 * r * r;
		V = (4 / 3) * PI * r * r * r;
		printf("%8.2lf    %8.2lf   %8.2lf\n", r, SA, V);

	}

	return(0);
}
