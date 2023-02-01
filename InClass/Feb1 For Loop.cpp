#include <stdio.h>
int main(void)
{
	int k, sum = 0, c=0, avg=0;
	printf("Even Number | Sum | Count\n\n");
	for (k = 1; k <= 7; k++)
	{
		if (k % 2 == 0)
		{
			sum += k;
			c++;
			printf("    %2i        %2i     %2i     \n", k, sum, c);
		}
	}
	printf("Average \n");
	avg = sum / c;
	printf("    %2i\n", avg);
	return(0);
}
