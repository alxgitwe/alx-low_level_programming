#include "main.h"
/**
 * _isalpha - function that checks for lowercase or uppercase character
 * _isqlpha :shows 1 if the C is a letter or 0 if it is not a letter
 *
 * @c : char in ascii
 *
 * Return: return the value 0 or 1
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
