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
	printf("\n   Dart Player     x    y   Q# \n\n");
	for (k = 0; k <= c-1; k++)
	{
		C[k].x = double(rand_int(a, b));
		C[k].y = double(rand_int(a, b));
	}
	for (k = 0; k <= c - 1; k++)
		if (C[k].x == 0 && C[k].y == 0) {
			printf("   %-9s      %2.0f   %2.0f   BULLSEYE!\n", C[k].name, C[k].x, C[k].y);
		}
		else if (C[k].x > 0 && C[k].y > 0) {
			printf("   %-9s      %2.0f   %2.0f   Q1\n", C[k].name, C[k].x, C[k].y);
		}
		else if (C[k].x < 0 && C[k].y > 0) {
			printf("   %-9s      %2.0f   %2.0f   Q2\n", C[k].name, C[k].x, C[k].y);
		}
		else if (C[k].x < 0 && C[k].y < 0) {
			printf("   %-9s      %2.0f   %2.0f   Q3\n", C[k].name, C[k].x, C[k].y);
		}
		else if (C[k].x > 0 && C[k].y < 0) {
			printf("   %-9s      %2.0f   %2.0f   Q4\n", C[k].name, C[k].x, C[k].y);
		}
		else if (C[k].x == 0 && C[k].y > 0 || C[k].y < 0) {
			printf("   %-9s      %2.0f   %2.0f   Y-AXIS\n", C[k].name, C[k].x, C[k].y);
		}
		else if (C[k].x > 0 || C[k].x < 0 && C[k].y == 0) {
			printf("   %-9s      %2.0f   %2.0f   X-AXIS\n", C[k].name, C[k].x, C[k].y);
		}
		else {
			printf("   %-9s      %2.0f   %2.0f\n", C[k].name, C[k].x, C[k].y);
		}
	return 0;
}


int rand_int(int a, int b)
{
	return rand() % (b - a + 1) + a;
}


/*
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
*/
