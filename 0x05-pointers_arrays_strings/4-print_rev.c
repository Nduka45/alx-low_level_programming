#include "main.h"

/**
 *print_rev - prints a string, in reverse, followed by a new line
 *@s: string
 */

void print_rev(char *s)
{
	int m, k, len;

	m = 0;
	while (s[m] != '\0')
	{
		m++;
	}
	len = m;
	for (k = len - 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}

	_putchar('\n');
}
