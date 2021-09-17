#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: pointer to the string
 * @accept: pointer to the number of bytes of substring
 *
 * Return: the number of bytes of the initial segment of s
 */

char *_strpbrk(char *s, char *accept)
{
	int x;
	int y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				return (&s[x]);
			}
		}
	}
	return ('\0');
}
