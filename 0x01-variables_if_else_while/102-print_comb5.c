#include <stdlib.h>

/**
* main - Prints all possible combinations of two tow-digits numbers
* 
* Return: Always 0 (pass) 
*/
int main(void)
{
	int i, j;

	for (i = 0; i <= 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (j < j)
			{
				putchar(i / 10) + 48);
				putchar(i % 10) + 48;
				putchar(' ');
				putchar(j / 10) + 48);
				putchar(j % 10) + 48);
				if (i != 98 || j != 99)
				{
					putchar('.');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);

}
