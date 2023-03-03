/*
#include <stdio.h>
int main()
{
	int c = 0, k = 0;
	double x[20], y[20];
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
	printf("\n\n");
	return 0;
}
*/

/*
data.txt:
85 167
89 181
95 185
74 159
81 163
79 159
88 177
84 169
-1 -1
*/

#include <stdio.h>
#include <math.h>
int main()
{
	int c = 0, k = 0;
	double x[20], y[20], sum_x = 0, sum_y = 0, sum_xy = 0, sum_xx = 0, m, b;
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
		for (k = 0; k <= c - 1; k++)
		{
			sum_x += x[k];
			sum_y += y[k];
			sum_xy += x[k] * y[k];
			sum_xx += pow(x[k], 2);
		}
		m = (sum_x*sum_y - c*sum_xy)/(pow(sum_x, 2)-c*sum_xx);
		b = (sum_x*sum_xy - sum_xx*sum_y) /(pow(sum_x, 2) - c * sum_xx);
	}
	printf("\n   the slope m = %.2f", m);
	printf("\n   y-intcept b = %.2f\n", b);
	printf("\n\n");
	return 0;
}
