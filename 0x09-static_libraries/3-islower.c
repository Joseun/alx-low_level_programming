#include "main.h"

/**
 * _islower - checks if the character is lowercase
 *
 * @i: ASCII  code character
 *
 * Return: 1 if lowercase, 0 otherwise
 */

int _islower(int i)
{
	if (i >= 97 && i <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
