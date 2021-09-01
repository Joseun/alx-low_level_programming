#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	long int w, x, y, z;

	x = 1;
	y = 2;

	for (z = 0; z <= 4000000; z++)
	{
		z = x + y;

		if ((z % 2) == 0)
			w += z;

		x = y;
		y = z;
	}
		printf("%ld\n", w);
		return (0);
}
