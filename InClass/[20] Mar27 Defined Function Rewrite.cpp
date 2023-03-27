/*
#include <stdio.h>
#include <math.h>
#define PI 4*atan(1)
int main()
{
	int factorial(int);
	int n, N;   // N = n!
	double x, degrees = 50, sum = 0, term;
	x = degrees * PI / 180;
	for (n = 0; n <= 10; n++)
	{
		term = pow(-1,n)/factorial(2*n)*pow(x,2*n);
		sum += term;
	}
	printf("  cos(%.0f) = %.9f\n\n", degrees, sum);
	return 0;
}

int factorial(int k)
{
	int j, term = 1;
	for (j = 2; j <= k; j++)
		term *= j;
	return term;
}
*/

#include <stdio.h>
#include <math.h>
#define PI 4*atan(1)

int main()
{
	double cosine(double);
	double degrees;
	for (degrees = 0; degrees <= 90; degrees += 10)
		printf("  cos(%2.0f) = %.4f\n", degrees, cosine(degrees)); //2.0f fixes the alignment by setting field width of 2
	return(0);
}

double cosine(double degrees)
{
	int factorial(int);
	int n, N;   // N = n!
	double x, sum = 0, term;
	x = degrees * PI / 180;
	for (n = 0; n <= 10; n++)
	{
		term = pow(-1, n) / factorial(2 * n) * pow(x, 2 * n);
		sum += term;
	}
	return sum;
}

int factorial(int k)
{
	int j, term = 1;
	for (j = 2; j <= k; j++)
		term *= j;
	return term;
}
