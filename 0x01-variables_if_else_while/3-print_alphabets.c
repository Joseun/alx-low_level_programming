#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>

/* betty style doc for function main goes there */
int main(void)
{
	char ch = 'a';

	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
