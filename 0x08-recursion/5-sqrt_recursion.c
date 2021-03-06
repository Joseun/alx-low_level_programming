#include "main.h"

/**
 * find_sqrt - finds the natural square root of an inputted number
 * @n: the number to find the square root of
 * @x: the root to be tested
 *
 * Return: -1 if number is not a natural square root
 * the root if is the natural square root
 */

int find_sqrt(int n, int x)
{
	if ((x * x) == n)
	{
		return (x);
	}
	if (x == n / 2)
	{
		return (-1);
	}
	return (find_sqrt(n, x + 1));
}

/**
 * _sqrt_recursion - returns natural square root of a number
 *
 * @n: pointer to number
 *
 * Return: -1 when n is not a natural square or square root x
 */

int _sqrt_recursion(int n)
{
	int x = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
		return (find_sqrt(n, x));
}
