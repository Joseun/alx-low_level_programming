#include "main.h"

/**
 * leet - encodes every word of a string
 *
 * @s: pointer to the string to change
 *
 * Return: the resulting string
 */

char *leet(char *s)
{
	int x, y;

	char *a = "aAeEoOtTiL";
	char *b = "4433007711";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (s[x] == a[y])
			{
				(s[x] == b[y]);
			}
		}
	}
	return (s);
}
