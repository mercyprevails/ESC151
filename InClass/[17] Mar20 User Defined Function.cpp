/*
#include <stdio.h>
int main()
{
	double a = 1, b = 5; //declarations
	void cube(double, double); //prototype function
	cube(a, b); // assigning variables to above function (function call)
	return 0;
}

void cube(double a, double b)
{
	double s;
	printf("\n   Side Dim.   Volume \n\n");
	for (s = a; s <= b; s++)
	{
		printf("  %5.0f      %5.0f\n", s, s * s * s);
	}
}

*/

#include <stdio.h>
#include <math.h>
int main()
{
	int c = 0, k = 0;
	double x[20], y[20], sum_x = 0, sum_y = 0, sum_xy = 0, sum_xx = 0, sum_yy = 0, r;
	void corr(double [], double [], int); //prototype function
	FILE* DATA;
	DATA = fopen("data.txt", "r");
	if (DATA == NULL)
		printf("\n   Error opening input file.   \n");
	else
	{
		printf("\n   The input file was opened successfully.\n\n");
		fscanf(DATA, "%lf %lf", &x[k], &y[k]);
		do
		{
			printf("   x[%i] = %.0f, y[%i] = %.0f \n", k, x[k], k, y[k]);
			c++;
			k++;
			fscanf(DATA, "%lf %lf", &x[k], &y[k]);
		} while (x[k] >= 0);
		printf("\n   c = %i \n", c);
	}
	corr(x, y, c);
	printf("\n\n");
	return 0;
}

void corr( double x[20], double y[20], int c)
{
	int k;
	double r, sum_x = 0, sum_y = 0, sum_xy = 0, sum_xx = 0, sum_yy = 0;
	for (k = 0; k <= c - 1; k++)
	{
		sum_x += x[k];
		sum_y += y[k];
		sum_xx += x[k] * x[k];
		sum_yy += y[k] * y[k];
		sum_xy += x[k] * y[k];
	}
	r = (c * sum_xy - sum_x * sum_y) / sqrt((c * sum_xx - sum_x * sum_x) * (c * sum_yy - sum_y * sum_y));
	printf("\n\n   r = %.4f \n", r);
}
