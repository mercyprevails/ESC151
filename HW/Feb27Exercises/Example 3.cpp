#include <stdio.h>
int main()
{
	int c = 0, k = 0, j = 0;
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
			sum += x[k];
			printf("   x[%i] = %.0f\n", k, x[k]);
			c++;
			k++;
			fscanf(DATA, "%lf", &x[k]);
		} while (x[k] >= 0);
		printf("\n   c = %i \n", c);
	}
	mean = sum / c;
	printf("\n   The mean is %.2f \n", mean);
	int c2 = 0;
	for (j = 0; j <= k; j += 1) {
		if (x[j] <= mean)
			if (j < 8) {
				c2++;
			}
	}
	printf("\n   There were %d data values less than the mean.\n", c2);
	printf("\n   The data values less than the mean are: \n\n", mean);
	for (j = 0; j <= k; j += 1) {
		if (x[j] <= mean)
			if (j < 8) {
				printf("   x[%i] = %.2f < %.2f\n", j, x[j], mean);
			}
	}
	printf("\n\n");
	return 0;
}
