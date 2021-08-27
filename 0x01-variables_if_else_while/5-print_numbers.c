#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* print numbers from 0 to 9 */
int main(void)
{
	char ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
