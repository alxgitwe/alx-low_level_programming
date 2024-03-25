#include "main.h"
/**
 * _islower - unction that checks for lowercase character
 *
 * 3-islower.c :retunr 0 or 1 when checks for lowercase
 *
 * @c : char in ascii
 *
 * Return: return the value 0 or 1
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
