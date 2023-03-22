#include <stdio.h>
int main()
{
	int factorial(int); // function prototype
	int factorial_r(int); // function prototype
	factorial(10);
	return (0);
}


int factorial(int K) // function header
{
	int k, term = 1;
	for (k = 1; k <= 10; k++)
	{
		term *= k;
		printf(" %i! = %i \n", k, term);
	}
	return (0);
}


int factorial_r(int K) // function header
{
	int k, term = 1;
	if (K == 0)
		return (1);
	else
		return K *= factorial_r(K - 1);
}
