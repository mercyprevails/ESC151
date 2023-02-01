
#include <stdio.h>

#define PI 3.14159

int main(void)
{
	double r = 3, D, SA, V; // Radius, Diameter Surface Area Volume
	D = 2 * r;
	SA = 4 * PI * r * r;
	V = 4 / 3 * PI * r * r * r;
	printf("The radius is %.3f meters. \n", r);
	printf("The diameter is %.3f meters. \n", D);
	printf("The surface area is %.3f square meters. \n", SA);
	printf("The volume is %.3f meters cubed. \n", V);
	return 0;

}
