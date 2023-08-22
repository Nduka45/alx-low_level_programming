#include "main.h"

/**
 * _atoi - a function that convert a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int j, k, p, len, g, digit;

	j = 0;
	k = 0;
	p = 0;
	len = 0;
	g = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (j < len && g == 0)
	{
		if (s[j] == '-')
			++k;

		if (s[j] >= '0' && s[j] <= '9')
		{
			digit = s[j] - '0';
			if (k % 2)
				digit = -digit;
			p = p * 10 + digit;
			g = 1;
			if (s[j + 1] < '0' || s[j + 1] > '9')
				break;
			g = 0;
		}
		j++;
	}

	if (g == 0)
		return (0);

	return (p);
}
