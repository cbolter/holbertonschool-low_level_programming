#include <stdlib.h>
#include <time.h>
/*0-positive_or_negative_c */

/* Main -- Generates random int, test whether postitve or negative */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	} else
	{
		printf("%d is zero\n", 0);
	return (0);
}
