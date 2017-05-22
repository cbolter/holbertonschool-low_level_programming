#include "holberton.h"
/**
 * jack_bauer - prints all possible times in the 24 hour time format.
 *
 *
 *
 *
 *
 */
void jack_bauer(void)
{
	int ten_h, one_h, ten_s, one_s;

	for (ten_h = 0; ten_h < 3; ten_h++)
	{
		for (one_h = 0; one_h < 10; one_h++)
		{
			if (ten_h == 2 && one_h == 4)
			{
				break;
			}

			for (ten_s = 0; ten_s < 6; ten_s++)
			{
				for (one_s = 0; one_s < 10; one_s++)
				{
					_putchar(ten_h + '0');
					_putchar(one_h + '0');
					_putchar(':');
					_putchar(ten_s + '0');
					_putchar(one_s + '0');
					_putchar('\n');
				}
			}
		}
	}
}
