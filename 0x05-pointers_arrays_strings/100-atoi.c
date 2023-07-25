/**
 * _atoi - converts a string to an integer
 *
 * @s: string input parameter
 *
 * Return: converted integer from string
*/

int _atoi(char *s)
{
	unsigned int i = 0;
	int neg = 1;

	while (*s != '\0')
	{
		if (*s < 58 && *s > 47)
		{
			i = (*s - 48) + (i * 10);
		}
		else if (*s == '-')
		{
			neg = neg * -1;
		}
		else if (i > 0)
		{
			break;
		}
		s++;
	}
	i = i * neg;

	return (i);
}
