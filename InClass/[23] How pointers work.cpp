#include <stdio.h>
int main()
{
	double x = 10, y = 20, *a = &x, *b = &y;
	printf("    x        y        a             b   \n");
	printf("   %.2f   %.2f   %u    %u  \n", x, y, a, b);// same as line 9
	printf("\n");
	printf("   *a       *b        &x            &y  \n");
	printf("   %.2f   %.2f   %u    %u  \n", *a, *b, &x, &y); // same as line 6
	return(0);
}
