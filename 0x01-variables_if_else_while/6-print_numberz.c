#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* prints numbers in int from 0 to 9 */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void) /* function main from header library */
{
/* ch is equals to zero which is a int variable */
	int ch = '0';
/*
 * while loop to number 9 and prints from less
 * than 9
 */
	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
