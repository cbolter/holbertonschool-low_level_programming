/**
 * _islower - A program that checks the case of characters.
 * @c: Value passed to function
 * Return: 1 if c is a lowercase letter, 0 if not
 *
 */
int _islower(int c)
{

	if ((c <= 122) && (c >= 97))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
