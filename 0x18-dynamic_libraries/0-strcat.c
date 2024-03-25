#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * @dest : pointer
 * @src : pointer
 *
 * Return: return (pointer)
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i])
		i++;
	for (j = 0; src[j]; j++)
		dest[i++] = src[j];
	return (dest);
}
