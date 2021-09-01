#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main()
{
	int x, y;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
		{
			y = 0;
			y += x;
		}
			printf("%d\n", y);
			return (y);
	}
}
