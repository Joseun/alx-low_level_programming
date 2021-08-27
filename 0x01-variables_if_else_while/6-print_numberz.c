#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
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
