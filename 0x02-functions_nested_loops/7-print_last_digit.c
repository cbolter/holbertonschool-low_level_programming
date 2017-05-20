#include "holberton.h"
/**
 * _abs - Calculates the absolute value of an integer
 * @i: Value passed to function
 * Return: 1 if n is positive, 0 if zero, -1 if negative
 *
 */
int print_last_digit(int i)
{
	int last;
	last = i % 10;
      	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');

	return (last);
}
