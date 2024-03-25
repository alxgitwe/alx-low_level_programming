#include "main.h"

/**
 * _strncat - function that concatenates two strings
 *
 * @dest : pointer
 * @src : pointer
 * @n : int
 *
 * Return: return (dest)
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i])
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}
