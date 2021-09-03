#include <stdio.h>

/**
 * main - entry point
 *
 * Return: void
 */

int main(void)
{
	int factor, prime_factors, largest;
	long long int x;

	x = 612852475143;

	for (factors = 1; factors <= x; factors++)
	{
		if ((x % factor == 0)
		{
			printf(" FizzBuzz");
		}
		else if (x % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (x % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", x);
		}
	}
	printf("\n");
	return (0);
}
