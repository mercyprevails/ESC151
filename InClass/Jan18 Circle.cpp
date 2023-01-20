#include <stdio.h>

#define PI 3.14159

int main(void)
{
	double r=3, A, C, G; // Area, Circ, G is operand to find radius
	G = r * r;
	A = 2 * PI * r;
	C = PI * G;
	G = r * r;
    printf("The radius is %.2f meters. \n", r);
	printf("The circumference is %.2f meters. \n", C);
	printf("The area is %.2f meters. \n", A);
	return 0;
	
}
