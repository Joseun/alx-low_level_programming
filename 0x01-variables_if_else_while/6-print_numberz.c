#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - print numbers from int 0 to 9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
