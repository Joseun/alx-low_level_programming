#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets ten times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int y, x;

	for (y = 0; y <= 9; y++)
	{
		for (x = 'a'; x <= 'z';  x++)
		{
		_putchar(x);
		}
		_putchar('\n');
		}
}
