#include "main.h"

/**
 * _pow_recursion: returns value of x raised to power of y
 *
 * @x: pointer to number
 * @y: pointer to number
 * Return - -1 when y is lower than 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
