#include "main.h"

/**
 *puts2 - a function that prints every other character of a string
 *followed by a new line
 *@str: string to print characters of a string
 */

void puts2(char *str)
{
	int len, k;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (k = 0; k < len; k += 2)
	{
		_putchar(str[k]);
	}

	_putchar('\n');
}
