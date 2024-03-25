#include "main.h"

/**
 * *_strchr - function that locates a character in a string
 *
 * @s: pointer
 *
 * @c: char
 *
 * Return: return pointer (s)
 *
 */

char *_strchr(char *s, char c)
{
	int d;

	for (d = 0; s[d] >= '\0'; d++)
	{
		if (s[d] == c)
			return (s + d);
	}

	return ('\0');
}
