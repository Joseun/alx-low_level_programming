#include <stdio.h>

/**
 * main - entry point
 *
 * Return: void
 */

int main(void)
{
	int x;

	x = 1;
	printf("%d", x);
	for (x = 0; x <= 100; x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
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
			printf(" %d", n);
		}
	}
	printf("\n");
	return (0);
}
