#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1 : pointer
 * @s2 : pointer
 *
 * Return: return (i)
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			i = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;

		}
		s1++;
		s2++;
	}
	return (i);
}
