#include "main.h"

/**
 * cap_string - capitalizes every word of a string
 *
 * @s: pointer to the string to change
 *
 * Return: the resulting string
 */

char *cap_string(char *)
{
	int x, y;

	char z[] = {' ', '\t', '\n', ',',  ';', '.', '!', '?', '"', '(',
		')', '{', '}'};
	{
		if (x == 0 && s[x] >= 'a' && s[x] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		for (y = 0; y < 13; y++)
		{
			if (s[x] == z[y])
			{
				if (s[x + 1] >= 'a' && s[x + 1] <= 'z')
				{
					s[x + 1] -= 32;
				}
			}
		}
	}
	return (s);
}
