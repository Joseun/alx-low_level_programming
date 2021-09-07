#include "main.h"

/**
 * puts_half - prints second half of a string
 * followed by a new line to std out
 *
 *
 * @str: pointer to the string to print
 */

void puts_half(char *str)
{
	int len, x, n;

	x = 0;
	len = 0;

	while (str[x] != '\0')
	{
		 x++;
		 len++;
	}

	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}
	for (; n < x; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
