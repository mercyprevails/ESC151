#include <stdio.h>
#include <math.h>
#define PI acos(-1.0)
int main(void)
{
	double r = 20, h = 30, V, RR; // Radius, Height, Volume, RadiusSquared Variable
	RR = r * r;
	V = PI * RR * h;
	printf("The radius is %.2f cm. \n", r);// Begin output
	printf("The height is %.2f cm. \n", h);
	printf("The radius of the cylinder is %.2f cm. \n", V);
	return(0);
}
