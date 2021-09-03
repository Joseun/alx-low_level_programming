#include <stdio.h>

/**
 * main - entry point
 *
 * Return: void
 */

int main(void)
{
	long int factor;
	long int x;

	x = 612852475143;

	for (factor = 2; factor <= x; factor++)
	{
		if (x % factor == 0)
		{
			if (x % factor == 0)
			{
				x /= factor;
				factor--;
			}
		}
	}
	printf("%ld\n", factor);
	return (0);
}
