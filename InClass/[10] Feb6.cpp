#include <stdio.h>
#include <math.h>
int main(void)
{
	double x[5], range, max, min, midrange, mean, c; 
	int k;
	x[0] = 84;
	x[1] = 92;
	x[2] = 88;
	x[3] = 79;
	x[4] = 96;
	max = x[0];
	min = x[0];
	mean = (x[0] + x[1] + x[2] + x[3] + x[4]) / 5;
	for (k = 1; k <= 4; k++)
	{
		if (x[k] >= max)
		{
			max = x[k];
		}
		if (x[k] <= min)
		{
			min = x[k];
		}
	}
	for (k = mean; k <= 4; k++)
	{
		if (x[k] >= mean);
		{
			c++
			printf(" %d \n\n", c)
		}
	}
	range = (max - min);
	midrange = (max + min) / 2;
	printf("the max number is %.2f \n", max);
	printf("the min number is %.2f \n", min);
	printf("the range is %.f \n", range);
	printf("the midrange is %.2f \n", midrange);
	return(0);
}
