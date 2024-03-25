#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: pointer
 *
 * @accept: pointer
 *
 * Return: return the number of bytes in the initial segment of s
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int c;

	int d;

	for (c = 0; s[c] != '\0'; c++)
	{
		for (d = 0; accept[d] != s[c]; d++)
		{
			if (accept[d] == '\0')
				return (c);
		}
	}
	return (c);

}
