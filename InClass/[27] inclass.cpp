#include <stdio.h>
struct exam
{
	char name[10];
	double score;
};

void sort1(struct exam[], int);
double median(struct exam[], int);

int main(void)
{
	double Median, Q3, Q1;
	struct exam C[20], C1[20], C3[20];
	int k = 0, c, c1 = 0, c2 = 0, c3 = 0, cc3 = 0, cc1 = 0;
	FILE* DATA;
	DATA = fopen("data.txt", "r");
	if (DATA == NULL)
		printf("\n   Error opening input file.   \n");
	else
	{
		printf("\n   The input file was opened successfully.\n\n");
		while (fscanf(DATA, "%s %lf\n", &C[k].name, &C[k].score) == 2)
		{
			printf("   %-9s %7.2f\n", C[k].name, C[k].score);
			k++;
		}
		c = k;

		sort1(C, c);
		Median = median(C, c);
		printf("\n\n   Exam result sorted from highest to lowest:\n\n");
		for (k = 0; k <= c - 1; k++)
			printf("   %-9s %7.2f\n", C[k].name, C[k].score);
		printf("\n   Median: %0.2f\n\n", Median);
		for (k = 0; k <= c - 1; k++)
		{
			if (C1[k].score < Median)
			{
				C1[c1] = C[k];
				c1++;
			}
			cc1 = c1;
			if (C[k].score > Median)
			{
				C3[c3] = C[k];
				c3++;
			}
			cc3 = c3;
		}
	}
	printf("\n\n  Students with scores greater than the Median:\n\n");
	for (c1 = 0; c1 <= cc1 - 1; c1++)
		printf("   %-9s %7.2f\n", C1[c1].name, C1[c1].score);

	printf("\n\n  Students with scores greater than the Median:\n\n");
	for (c3 = 0; c3 <= cc3 - 1; c3++)
		printf("   %-9s %7.2f\n", C3[c3].name, C3[c3].score);

	Q1 = median(C1, cc1);
	printf("\n   Q1 = %.2f\n\n", Q1);

	Q3 = median(C3, cc3);
	printf("\n   Q3 = %.2f\n\n", Q3);
	return 0;
}

void sort1(struct exam C[20], int c)
{
	struct exam hold;
	int m, j, k;
	for (k = 0; k <= c - 2; k++)
	{
		m = k;
		for (j = k + 1; j <= c - 1; j++) // Initialize j to k+1 and use it to iterate through the remaining elements
		{
			if (C[j].score > C[m].score) // Compare the scores and update the index m if the current score is higher
				m = j;
		}
		hold = C[m];
		C[m] = C[k];
		C[k] = hold;
	}
}

double median(struct exam C[20], int c)
{
	double med;
	if (c % 2 == 0)
		med = (C[c / 2].score + C[c / 2 - 1].score) / 2;
	else
		med = C[c / 2].score;
	return med;
}
