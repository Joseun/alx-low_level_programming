#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - print numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch = 0;

	while (ch < 9)
	{
		putchar(ch);
		putchar(',');
		putchar(' ');
		ch++;
	}
	putchar('9');
	putchar('\n');
	return (0);
}
