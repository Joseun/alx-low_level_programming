#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* prints alphabets in lowercase in reverse */
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
