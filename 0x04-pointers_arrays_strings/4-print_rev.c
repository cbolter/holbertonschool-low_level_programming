#include "holberton.h"

/**
 * print_rev - prints a string
 *
 *@*s: poitner to char array
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int length;
	i = 0;

	for(length = 0; s[i]; i++)
        {
		length++;
	}

	for(; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
