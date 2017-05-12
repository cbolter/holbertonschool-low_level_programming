#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph = 'a';
	char cap_alph = 'A';

	while (alph <= 'z')
	{
	     putchar(alph);
	     alph++;
	}
	while (cap_alph <= 'Z')
	{
	     putchar(cap_alph);
	     cap_alph++;
	}
	putchar('\n');
	return (0);
}
