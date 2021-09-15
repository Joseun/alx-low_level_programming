#include "main.h"

/**
 * _puts_recursion - print a string followed by a new line
 *
 * @s: pointer to string
 *
 * Decription: This is a longer description.
 * A function that prints a string recursively and adds a new line afterwards
 *
 * Return - Always 0 Success
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar ('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
