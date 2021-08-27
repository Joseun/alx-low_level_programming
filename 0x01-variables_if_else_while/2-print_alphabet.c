#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* print lowercase alphabet from a to z */
/** main - entry point
 *
 * return - o sucess
 */
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
