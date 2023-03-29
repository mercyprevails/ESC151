#include <stdio.h>
int main()
{
	double median(double [], int);
	int percentile(double [], double, int);
	int c = 0, k = 0, j, m;
	double x[20], hold;
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

	printf("\n   median = %2.2f \n\n", median(x, c));
	printf("\n   percentile = %i \n\n", percentile(x, x[1], c));
	printf("\n\n");
	return 0;
}

//*************************************************************
double median(double x[], int c)
{
	double Median;
	if (c % 2 == 1)
		Median = x[c / 2];
	else
		Median = (x[c / 2] + x[c / 2 - 1]) / 2;
	return Median;
}

//*************************************************************
int percentile(double x[], double X, int c)
{
	double Percentile;
	int k, n = 0, N;
	N = c;
	for (k = 0; k <= c - 1; k++)
	{
		if (x[k] < X)
			n++;
	}
	Percentile = 100.0 * n / N;
	return Percentile;
}
