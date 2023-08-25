#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: dest
 * @src: string to add
 * @n: number
 *
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
