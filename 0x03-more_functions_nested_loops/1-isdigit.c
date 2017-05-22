#include "holberton.h"
/**
 * _isdigit - Tests if character is a digit
 * @c: Character to test
 * Return: 0 if not digit, 1 if digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
