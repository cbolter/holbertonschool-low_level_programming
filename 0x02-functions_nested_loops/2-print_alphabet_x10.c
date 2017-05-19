#include "holberton.h"
/**
 * print_alphabet_x10 - entry point
 * print_alphabet_x10: Prints the alphabet 10 times!
 *
 */
void print_alphabet_x10(void)
{
	char a;
	int b;

	b = 0;

	while (b < 10)
	{
		b++;
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar(10);
	}
}
