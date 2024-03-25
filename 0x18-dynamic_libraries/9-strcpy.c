#include "main.h"

/**
 * *_strcpy - function that copies the string pointed
 *
 * @dest : char
 *
 * @src : char
 *
 * Return: return value dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
