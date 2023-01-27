#include <stdio.h>
int main(void)
{
	double side = 10, perimeter, area, sidein, sidecm, areain;
	sidein = (side * 12);
	sidecm = (sidein * 2.54);
	perimeter = (side * side);
	area = (sidecm * sidecm);
	areain = (sidein * sidein);
	printf("The area of the square is %.3lf cm squared \n", area);
	printf("The area of the square is also %.3lf in squared \n", areain);
	printf("The perimeter of the square is %.3lf feet \n", perimeter);
	return(0);
}
