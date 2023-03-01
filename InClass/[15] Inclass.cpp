 #include <stdio.h>
int main()
{
	int c = 0, k = 0, c2 = 0;
	c2 = c - 2;
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
			if ((2 * x[k] < y[k]) <= (c - 2))
				printf("   x[%i] = %.0f, y[%i] = %.0f \n", k, x[k], k, y[k]);
				k++;
				c++;
				c2++;
				fscanf(DATA, "%lf %lf", &x[k], &y[k]);
		} while (x[k] >= 0);
		printf("\n   c = %i \n", c2);
	}
	printf("\n\n");
	return 0;
}
