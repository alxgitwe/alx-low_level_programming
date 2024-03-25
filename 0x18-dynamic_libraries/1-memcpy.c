#include "main.h"

/**
 * _memcpy - function that copies memory area
 *
 * @dest: pointer
 *
 * @src: pointer
 *
 * @n: int
 *
 * Return: return (dest) pointer
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
		dest[d] = src[d];
	return (dest);
}
