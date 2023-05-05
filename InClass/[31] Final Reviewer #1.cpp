#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct darts
{
	char name[10];
	double x;
	double y;
	double d;
};

int main(void)
{
	struct darts C[20];
	int k = 0, c, a = -5, b = 5;
	double sum_d = 0, mean;
	int rand_int(int a, int b);
	unsigned int seed;
	FILE* DATA;
	DATA = fopen("data.txt", "r");
	if (DATA == NULL)
		printf("\n   Error opening input file.   \n");
	else
	{
		printf("\n   The input file was opened successfully.\n\n");
		printf("   Dart Players   \n\n");
		while (fscanf(DATA, "%s \n", &C[k].name) == 1)
		{
			printf("   %-9s\n", C[k].name);
			k++;
		}
		c = k;
	}
	printf("\n   Enter a positive integer seed value: \n   ");
	scanf("%u", &seed);
	srand(seed);
	printf("\n   Dart Player      x      y      d \n\n");
	for (k = 0; k <= c - 1; k++)
	{
		C[k].x = double(rand_int(a, b));
		C[k].y = double(rand_int(a, b));
		C[k].d = sqrt(pow(C[k].x, 2) + pow(C[k].y, 2));
		sum_d += C[k].d;
	}
	mean = sum_d / c;
	for (k = 0; k <= c - 1; k++)
		printf("   %-9s      %4.1f   %4.1f   %4.1f\n", C[k].name, C[k].x, C[k].y, C[k].d);
		printf("\n  These placers were closer to the target than the mean distance of %4.1f:\n\n", mean);
		printf("\n   Dart Player      x      y      d \n\n");
	for (k = 0; k <= c - 1; k++)
	{
		if (C[k].d < mean)
			printf("   %-9s      %4.1f   %4.1f   %4.1f\n", C[k].name, C[k].x, C[k].y, C[k].d);
	}
	return 0;
}


int rand_int(int a, int b)
{
	return rand() % (b - a + 1) + a;
}

/*
 ******* data.txt *******

Alex
Brittany
Chris
Daniel
Emily
Fernando
George
Haley
Isaac
Julie
Kay
Lance


 ******* OUTPUT *******

   Alex           -2.0    5.0    5.4
   Brittany       -4.0   -2.0    4.5
   Chris           3.0   -2.0    3.6
   Daniel          1.0   -2.0    2.2
   Emily           1.0   -3.0    3.2
   Fernando       -4.0    0.0    4.0
   George          0.0    0.0    0.0
   Haley           5.0   -5.0    7.1
   Isaac          -4.0   -5.0    6.4
   Julie           3.0    3.0    4.2
   Kay            -4.0    2.0    4.5
   Lance           0.0   -4.0    4.0

  These placers were closer to the target than the mean distance of  4.1:


   Dart Player      x      y      d

   Chris           3.0   -2.0    3.6
   Daniel          1.0   -2.0    2.2
   Emily           1.0   -3.0    3.2
   Fernando       -4.0    0.0    4.0
   George          0.0    0.0    0.0
   Lance           0.0   -4.0    4.0

*/
