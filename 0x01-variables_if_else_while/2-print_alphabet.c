#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* print lowercase alphabet from a to z */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
