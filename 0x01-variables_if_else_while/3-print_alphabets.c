#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Description - print all alphabets in lowercase then uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	char xy = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (xy <= 'Z')
	{
		putchar(xy);
		xy++;
	}
	putchar('\n');
	return (0);
}
