#include "holberton.h"
/**
 * print_alphabet - entry point
 * Return: return 0 = success
 *
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar(10);
}
