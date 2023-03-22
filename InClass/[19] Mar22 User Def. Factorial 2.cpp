#include <stdio.h>
int main()
{
	int factorial_r(int); // function prototype
	int j;
	for (j = 1; j <= 10; j++)
		printf("%2i! = %i \n", j, factorial_r(j));
	return (0);
}

int factorial_r(int K) // function header
{
	if (K == 0)
		return (1);
	else
		return K *= factorial_r(K - 1);
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
