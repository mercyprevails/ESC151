#include <stdio.h>
#include <math.h>
int main(void)
{
	double a, b, c, d, n=(1-2), r1, r2;
	printf("\nA quadratic equation ax^2 + bx + c = 0 has coefficients a, b, and c.\n\n");
	printf("Enter a:     ");
	scanf_s("%lf", &a);
	printf("Enter b:     ");
	scanf_s("%lf", &b);
	printf("Enter c:     ");
	scanf_s("%lf", &c);
	if (a == 1) {
		printf("\n\nThe quadratic equation is x^2 + %.0fx + %.0f = 0.\n\n", b, c);
	}
	else {
		if (a == n) {
			printf("\n\nThe quadratic equation is -x^2 + %.0fx + %.0f = 0.\n\n", b, c);
		}
		else {
			printf("\n\nThe quadratic equation is %.0fx^2 + %.0fx + %.0f = 0.\n\n", a, b, c);
		}
	}
	printf(" ======================== \n\n");
	d = b * b - 4 * a * c;
	printf("d = %.1lf.\n\n", d);
	if (d > 0) {
		printf("There are 2 roots.\n");
		r1 = (-b + sqrt(d)) / (2 * a);
		r2 = (-b - sqrt(d)) / (2 * a);
		printf("r1 = %.1f, r2 = %.1f. \n", r1,r2);
	}
	if (d == 0) {
		printf("There there is 1 root.\n");
		r1 = -b / (2 * a);
		printf("r1 = %.1f. \n", r1);
	}
	if (d < 0) {
		printf("There are no real roots.\n");
	}

	return(0);
}
