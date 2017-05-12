#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Main - Entry Point
 * Return 0 = success
 */

int main(void)
{
	int n;
        int r;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	r = n % 10;
	printf("Last digit of %d is %d", n, r );

	if (r < 6 && r != 0)
		printf("and is less than 6 and not 0\n");
	else if (r > 5)
		print("and is greater than 5\n");
	else
		printf("and is 0\n");

	return (0);
}
