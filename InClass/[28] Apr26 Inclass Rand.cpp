/*
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int rand_int(int, int);
	unsigned int seed;
	int k, a = 1, b = 10;

	printf("\n   Enter a positive integer seed value:   \n   ");
	scanf("%u", &seed);
	srand(seed);
  //
	printf("\n   Random Numbers:  \n\n");
	for (k = 1; k <= 10; k++)
		printf(" x= %2i y = %2i  \n", rand_int(a, b), rand_int(a, b));

	return 0;
}

int rand_int(int a, int b)
{
	return rand() % (b - a + 1) + a;;
}
*/

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
	int rand_int(int, int);
	unsigned int seed;
	struct darts C[20];
	int k = 0, c, a = -5, b = 5;
	FILE* DATA;
	DATA = fopen("data.txt", "r");
	if (DATA == NULL)
		printf("\n   Error opening input file.   \n");
	else
	{
		printf("\n   The input file was opened successfully.\n\n");
		printf("\n   Enter a positive integer seed value:   \n   ");
		scanf("%u", &seed);
		srand(seed);
    //
		printf("\n   ------------   \n");
		printf("   Dart Players   \n\n");
		while (fscanf(DATA, "%s \n", &C[k].name) == 1)
		{
			printf("   %-9s: x= %2i y = %2i  \n", C[k].name, rand_int(a, b), rand_int(a, b));
			k++;
		}
		c = k;
	}
	return 0;
}

int rand_int(int a, int b)
{
	return rand() % (b - a + 1) + a;;
}



/*
DATA FOR P2
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


/*
Unfinished 4/26
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
	int rand_int(int, int);
	unsigned int seed;
	struct darts C[20];
	int k = 0, c, a = -5, b = 5;
	FILE* DATA;
	DATA = fopen("data.txt", "r");
	if (DATA == NULL)
		printf("\n   Error opening input file.   \n");
	else
	{
		printf("\n   The input file was opened successfully.\n\n");
		printf("\n   Enter a positive integer seed value:   \n   ");
		scanf("%u", &seed);
		srand(seed);
		//
		printf("\n   ------------   \n");
		printf("   Dart Players   \n\n");
		while (fscanf(DATA, "%s \n", &C[k].name) == 1)
		{
			k++;
		}
		c = k;
	}
	for (k = 0; k <= c - 1; k++)
	{
		C[k].x = rand_int(a, b);
		C[k].y = rand_int(a, b);
	}
	for (k = 0; k <= c - 1; k++)
		printf("   %-9s: x= %2.0f   y= %2.0f  \n", C[k].name, C[k].x, C[k].y);
	return 0;
}

int rand_int(int a, int b)
{
	return rand() % (b - a + 1) + a;;
}
*/
