#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - print combination of three digits with numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int b;
	int n;
	int m;

	for (b = 0; b <= 9; b++)
	{
		for (n = b + 1; n <= 9; n++)
		{
			for (m = n + 1; m <= 9; m++)
			{
				putchar(b + '0');
				putchar(n + '0');
				putchar(m + '0');

				if (!(b == 7 && n == 8 && m == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
