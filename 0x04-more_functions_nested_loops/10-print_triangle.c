#include "main.h"

/**
 * print_triangle - prints triangle line of size
 *
 * @size: size to be printed
 *
 * Return: void
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
		_putchar('\n');
	for (x = 0; x < size; x++)
	{
		for (y = size - x; y > 1; y--)
		{
		_putchar(32);
		}
		for (z = x + y; z >= 1; z--)
			_putchar(35);
		_putchar('\n');
	}
}
