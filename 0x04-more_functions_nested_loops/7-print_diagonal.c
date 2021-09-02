#include "main.h"

/**
 * print_diagonal - prints diagonal line n times
 *
 * @n: times straight line is printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int x, y;

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
		{
		_putchar(32);
		}
		_putchar(92);
		if (x < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
