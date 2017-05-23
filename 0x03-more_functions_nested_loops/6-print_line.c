#include "holberton.h"
/**
 * print_line - prints 1 thru 14 10 times using _putchar.
 *  @n: Number of times to print the "_" character.
 *
 */
void print_line(int n)
{
	int printl;

	printl = 0;

	if (n > 0)
	{
		while (printl < n)
		{
			printl++;
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
