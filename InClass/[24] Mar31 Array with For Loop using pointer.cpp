#include <stdio.h>
int main()
{
	double x[20];
	int k, c = 6;
	printf("  k   x[k] *(x+k)     &x[k]      (x+k)\n\n");
	for (k = 0; k <= c - 1; k++)
	{
		x[k] = k * 10;
		printf("  %i   %2.0f     %2.0f    %u  %u  \n", k, x[k], *(x+k), &x[k], (x+k));
	}

	return(0);
}
