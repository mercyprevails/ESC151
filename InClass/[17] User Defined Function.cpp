//
#include <stdio.h>
int main()
{
	double a = 1, b = 5; //declarations
	void cube(double, double); //prototype function
	cube(a, b); // assigning variables to above function (function call)
	return 0;
}

void cube(double a, double b)
{
	double s;
	printf("\n   Side Dim.   Volume \n\n");
	for (s = a; s <= b; s++)
	{
		printf("  %5.0f      %5.0f\n", s, s * s * s);
	}
}

