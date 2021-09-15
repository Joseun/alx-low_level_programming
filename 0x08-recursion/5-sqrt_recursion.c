#include "main.h"

/**
 * _sqrt_recursion: returns natural square root of a number
 *
 * @n: pointer to number
 *
 * Return - -1 when n is not a natural square.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		int y = 2;

		if ((n % y == 0) && (n / y == y))
		{
			return (y);
		}
		else
		{
			y++;
			_sqrt_recursion(n);
		}

	}
	return (y);
}
