#include <stdio.h>
#include <math.h>
#define PI 3.1415926535897932384626433832795
int main(void)
{
	printf(" r            SA           V\n");
	printf("(m)          (m^2)       (m^3)\n");
	double V, r=0, SA;
	for (r = 2; r <= 12; r += 2)
	{
		SA = 4 * PI * (r * r);
		V = ((4 / 3) * PI) * (r * r * r);
		printf(" %.2lf       %.2lf       %.2lf \n", r, SA, V);
	}
	return(0);
}
