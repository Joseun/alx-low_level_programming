#include "main.h"

/**
 * print_alphabet - prints lowercase alphabets
 *
 * Return: void
 */

void print_alphabet(void)
{
	int xn;

	for (xn = 'a'; xn <= 'z'; xn++)
	{
		_putchar(xn);
	}
	_putchar('\n');
}
