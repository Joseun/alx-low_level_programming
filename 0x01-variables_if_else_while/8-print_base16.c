#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  prints alphabets in lowercase in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = '0';
	char xy = 'a';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	while (xy <= 'f')
	{
		putchar(xy);
		xy++;
	}
	putchar('\n');
	return (0);
}
