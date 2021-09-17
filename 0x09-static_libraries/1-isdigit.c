#include "main.h"

/**
 * _isdigit - checks if the character is a digit from 0 - 9
 *
 * @c: ASCII  code character
 *
 * Return: 1 if uppercase, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
