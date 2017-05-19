/**
 * _isalpha - A program that tests for alphanumerical characters.
 * @c: Value passed to function
 * Return: 1 if c is a lowercase letter, 0 if not
 *
 */
int _isalpha(int c)
{

	if ((c <= 122) && (c >= 97))
	{
		return (1);
	}
	else if ((c >= 65) && (c <= 90))
		return (1);
	else
	{
		return (0);
	}
}
