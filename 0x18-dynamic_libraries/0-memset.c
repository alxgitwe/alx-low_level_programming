#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 *
 * @s : pointer
 *
 * @b: char
 *
 * @n: int
 *
 * Return: return (s) a  pointer
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
		s[d] = b;
	return (s);

}
