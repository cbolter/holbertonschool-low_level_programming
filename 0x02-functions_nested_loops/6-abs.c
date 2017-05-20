#include "holberton.h"
/**
 * _abs - Calculates the absolute value of an integer
 * @i: Value passed to function
 * Return: 1 if n is positive, 0 if zero, -1 if negative
 *
 */
int _abs(int i)
{

	if (i < 0)
	{
		return (i * -1);
	}
	else
	{
		return (i);
	}
}
