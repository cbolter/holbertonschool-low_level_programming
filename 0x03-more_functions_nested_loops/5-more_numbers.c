#include "holberton.h"
/**
 * more_numbers - prints 1 thru 14 10 times using _putchar.
 *  int to be incremented in order to print digits 10 times.
 *  int for digits to be printed
 */
void more_numbers(void)
{
	int  b, d;

	d = 0;

	while (d <= 9)
	{
		d++;
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
			{
				_putchar('1');
			}
			_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}
