#include "main.h"

/**
 * _abs - computes and prints the absolute value of a number
 *
 * @n: integer input number
 *
 * Return: absolute value
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
	_putchar('\n');
}
