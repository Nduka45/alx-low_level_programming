#include <stdio.h>
#include "main.h"

/**
 *print_array -  a function that prints prints n elements of an array,
 *followed by a new line
 *@a: array to be printed
 *@n: no of elements to be printed
 */

void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		if (k == 0)
			printf("%d", a[k]);
		else
			printf(", %d", a[k]);
	}
		printf("\n");
}
