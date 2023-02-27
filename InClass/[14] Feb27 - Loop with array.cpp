#include <stdio.h>
int main()
{
	int c = 0, k = 0, j = 0, c2 = 0;
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
		printf("\n   c = %i \n\n", c);
	}
	mean = sum / c;
	for (j = 0; j <= k; j += 1) {
		if (x[j] <= mean)
			if (j < 8)
			printf("   x[%i] = %.0f\n", j, x[j]);
			c2++;
			c2 = (c - 4);
	}
	printf("\n   c < mean = %d \n", c2);
	printf("\n  The mean is %.2f. \n", mean);
	printf("\n\n");
	return 0;
}
