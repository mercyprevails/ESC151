#include <stdio.h>
#include <math.h>
int main(void)
{
	double x[20] = { 82, 91, 72, 94, 63, 81, 90, 79 };
	double y[20] = { 87, 85, 81, 95, 79, 83, 89, 80 };
	int c = 8, k;
	double sum_x{}, sum_y{}, sum_xx{}, sum_yy{}, sum_xy{};
	double r;
	printf("     x        y \n\n");
	for (k = 0; k <= c - 1; k++)
	{
		printf("   %.2f    %.2f \n", *(x + k), *(y + k));
		sum_x += *(x + k);
		sum_y += *(y + k);
		sum_xx += *(x + k) * *(x + k);
		sum_yy += *(y + k) * *(y + k);
		sum_xy += *(x + k) * *(y + k);
	}
	r = ((c * sum_xy) - (sum_x * sum_y)) / sqrt((c * sum_xx - pow(sum_x, 2)) * (c * sum_yy - pow(sum_y, 2)));
	printf("     r = %.4f\n\n", r);
	return 0;
}
