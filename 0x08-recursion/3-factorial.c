#include "main.h"

/**
 * factorial - returns factorial of a given number
 *
 * @n: pointer to number
 *
 * Return:  -1 when n is lower than 0.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1 || n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
