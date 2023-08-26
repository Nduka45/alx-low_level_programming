#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: dest
 * @src: string to add
 * @n: number
 * Return: a pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
