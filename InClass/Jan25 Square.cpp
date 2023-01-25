#include <stdio.h>
#include <math.h>
int main(void)
{
	double Area, Perimeter, Side = 5, SideInch, AreaInch;
	Perimeter = (Side * 4);
	Area = (Side * Side);
	SideInch = (Side * 12);
	AreaInch = (SideInch * SideInch);
	printf("The dimensions of a given square are as follows:\n");
	printf("The Perimeter is %.1lf feet \n", Perimeter);
	printf("The Area is %.2lf square feet \n", Area);
	printf("The Sides are %.2lf inches long \n", SideInch);
	printf("The Area is %.2lf square inches \n", AreaInch);
	return(0);
}
