#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	long int x, y, z;
	int a;

	x = 1;
	y = 2;

	printf("%ld, ", x);
	printf("%ld, ", y);
	for (a = 0; a < 48; a++)
	{
		z = x + y;
		printf("%ld", z);
		x = y;
		y = z;

		if (a == 47)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
