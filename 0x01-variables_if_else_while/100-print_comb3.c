#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - print combination of two digits with numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;
	int xy;

	for (ch = 0; ch <= 9; ch++)
	{
		for (xy = ch + 1; xy <= 9; xy++)
		{
		putchar(ch + '0');
		putchar(xy + '0');

		if (ch < 8)
		{
		putchar(',');
		putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);
}
