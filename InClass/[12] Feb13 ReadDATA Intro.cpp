#include <stdio.h>
int main(void)
{
	int c = 0;
	double x, max;      // assign x as a double (it is what's read from datafile)
	FILE* DATA;
	DATA = fopen("data.txt", "r");
	if (DATA == NULL)
	{
		printf("The DATAFILE was empty or NULL");
		return(401);
	}
	else
	{
		printf("\n   The DATAFILE was opened SUCCESSFULLY.  \n\n");
		fscanf(DATA, "%lf", &x);
		max = x;
		do
		{
			printf("   x = %.0f \n\n", x);
			if (x <= max)
				max = x;
			c++;
			fscanf(DATA, "%lf", &x);
		} 
		while (x >= 0);
		printf("\n   c = %i \n", c);
		printf("\n   max =%.0f \n", max);
	}
	return(0);
}
