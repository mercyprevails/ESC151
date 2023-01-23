//example 5 2023 01 20
#include <stdio.h>
#include <math.h>
#define PI acos(-1.0)
int main(void)
{
	double A = 100, th = 60, Ax, Ay; // variables - A is pounds, th in degrees
	th = th * PI / 180; // th is now in radians
	Ax = A * cos(th); // x component of A
	Ay = A * sin(th); // y component of A
	printf("The x component of the vector is %.3lf lbs. \n", Ax);
	printf("The y component of the vector is %.3lf lbs. \n", Ay);
	return(0);
}
