#include "main.h"

/**
 *rev_string - a function that reverses a string
 *@s: string to be reversed
 */

void rev_string(char *s)
{
	char tmp;
	int m, len, len1;

	len = 0;
	len1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (m = 0; m < len / 2; m++)
	{
		tmp = s[m];
		s[m] = s[len1];
		s[len1--] = tmp;
	}
}
