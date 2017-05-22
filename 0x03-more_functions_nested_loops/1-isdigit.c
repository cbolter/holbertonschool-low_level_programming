/**
 * _isdigit - Tests if character is uppercase
 * @c: Character to test
 * Return: 0 if not uppercase, 1 if uppercase
 */
int _isdigit(int c);
{
	if (c >= 30 && c <= 39)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
