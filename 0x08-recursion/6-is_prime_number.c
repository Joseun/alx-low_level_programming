#include "main.h"

/**
 * is_divisible - check if the number is divisible
 * @n: the number being checked
 * @x: the divisor
 *
 * Return: -1 if number is not divisible
 * 0 if the number is divisible
 */

int is_divisible(int n, int x)
{
	if (n % x == 0)
	{
		return (0);
	}
	if (x == n / 2)
	{
		return (1);
	}
	return (is_divisible(n, x + 1));
}

/**
 * is_prime_number - checks if number is prime
 *
 * @n: pointer to number
 *
 * Return: 1 when n is prime or 0 is not prime
 */

int is_prime_number(int n)
{
	int x = 2;

	if (n <= 1)
	{
		return (0);
	}
	if (n >= 2 && n <= 3)
	{
		return (1);
	}
		return (is_divisible(n, x));
}
