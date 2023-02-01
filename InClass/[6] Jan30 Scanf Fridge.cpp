#include <stdio.h>
int main(void)
{
	double Vf, Vi;
	printf("Enter volume in cubic feet: ");
	scanf("%lf", &Vf);
	Vi = (Vf * (12*12*12));
	printf("The volume has been converted to %.2lf inches cubed \n", Vi);
	return(0);
}
