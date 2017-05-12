#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hex;

	int num;

	num = '0';

	hex = 'a';

	while (num < '9')
	{
		putchar(num);
		num++;
	}
	while (hex < 'g')
	{
		putchar(hex);
		hex++;
	}
	putchar('\n');
	return (0);
}
