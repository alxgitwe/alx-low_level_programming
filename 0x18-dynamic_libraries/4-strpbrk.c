#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: pointer
 *
 * @accept: pointer
 *
 * Return: return pointer (s)
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int c = 0;

	int d;

	char *t;

	while (s[c] != '\0')
	{
		d = 0;

		while (accept[d] != '\0')
		{
			if (accept[d] == s[c])
			{
				t = &s[c];
				return (t);
			}
			d++;
		}
		c++;
	}
	return (0);
}
