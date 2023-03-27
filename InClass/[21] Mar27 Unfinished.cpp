#include <stdio.h>
int main()
{
	double median(double);
	double x[20], hold, median;
	return(0);
}

double median()
{
	int c = 0, k = 0, j, m;
	double x[20], hold, median;
	FILE* DATA;
	DATA = fopen("data.txt", "r");
	if (DATA == NULL)
		printf("\n   Error opening input file.   \n");
	else
	{
		printf("\n   The input file was opened successfully.\n\n");
		fscanf(DATA, "%lf", &x[k]);
		do
		{
			printf("   x[%i] = %.0f\n", k, x[k]);
			c++;
			k++;
			fscanf(DATA, "%lf", &x[k]);
		} while (x[k] >= 0);
		printf("\n   c = %i \n\n", c);
	}
	for (k = 0; k <= c - 2; k++)
	{
		m = k;
		for (j = k + 1; j <= c - 1; j++)
			if (x[j] > x[m])
				m = j;
		hold = x[m];
		x[m] = x[k];
		x[k] = hold;
	}
	for (k = 0; k <= c - 1; k++)
		printf("   x[%i] = %.0f\n", k, x[k]);
	if (c % 2 == 0)
		median = (x[c / 2] + x[c / 2 - 1]) / 2;
	else
		median = x[c / 2];
	printf("\n\n");
	return median;
}
