/**
 * _isdigit - checks if input is digit between 0 - 9
 *
 * @i: input
 *
 * Return: 1 if is digit, 0 if not
*/

int _isdigit(int i)
{
	if (i >= 48 && i <= 57)
		return (1);
	else
		return (0);
}
