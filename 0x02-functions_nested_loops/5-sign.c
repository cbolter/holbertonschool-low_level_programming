#include "holberton.h"
/**
 * print_sign - A program that tests for alphanumerical characters.
 * @n: Value passed to function
 * Return: 1 if n is positive, 0 if zero, -1 if negative
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
