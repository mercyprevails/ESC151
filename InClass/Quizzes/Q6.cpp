#include <stdio.h>
int main()
{
	int c = 0, k = 0;
	double x[20], sum = 0, mean;
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
			sum += x[k];
			c++;
			k++;
			fscanf(DATA, "%lf", &x[k]);
		} while (x[k] >= 0);
		printf("\n   c = %i \n\n", c);
	}
	mean = sum / c;
	printf("\n   The mean values < [%.2f] + 2 are:\n\n", mean);
	for (k = 0; k < c; k++)
		if (x[k] < mean + 2)
			printf("   x[%i] = %.0f\n", k, x[k]);
	printf("\n   The mean value is %.2f\n\n", mean);
	printf("\n\n");
	return 0;
}
