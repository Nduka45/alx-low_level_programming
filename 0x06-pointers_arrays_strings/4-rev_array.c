#include "main.h"

/**
*reverse_array - a function that reverses the content of an array of integers
*@a: integer number value a
*@n: integer number value n
*/

void reverse_array(int *a, int n)
{
	int k, p, tmp;

	p = n - 1;

	for (k = 0; k < n / 2; k++)
	{
		tmp = a[k];
		a[k] = a[p];
		a[p--] = tmp;
	}
}
