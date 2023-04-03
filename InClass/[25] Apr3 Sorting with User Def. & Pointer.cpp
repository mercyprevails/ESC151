#include <stdio.h>
int main()
{
	void sort(double *, int);
	int c = 0, k = 0;
	double x[20];
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
	sort(x, c);
	for (k = 0; k <= c - 1; k++)
		printf("   x[%i] = %.0f\n", k, x[k]);
	printf("\n\n");
	return 0;
}




void sort(double* x, int c) {
	int m, k, j;
	double hold;

	for (k = 0; k <= c - 2; k++)
	{
		m = k;
		for (j = k + 1; j <= c - 1; j++)
			if (*(x + j) > *(x + m))
				m = j;
		hold = *(x + m);
		*(x + m) = *(x + k);
		*(x + k) = hold;

		return;
	}
}
