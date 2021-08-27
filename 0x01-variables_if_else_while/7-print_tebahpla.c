#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* prints alphabets in lowercase in reverse */
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
