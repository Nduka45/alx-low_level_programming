#include "main.h"

/**
 *puts_half -  a function that prints half of a string
 *followed by a new line
 *@str: string of characters to be printed
 */

void puts_half(char *str)
{
	int len, j, k;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (k = len / 2; str[k] != '\0'; k++)
		{
			_putchar(str[k]);
		}
	} else if (len % 2)
	{
		for (j = (len - 1) / 2; j < len - 1; j++)
		{
			_putchar(str[j + 1]);
		}
	}
	_putchar('\n');
}
