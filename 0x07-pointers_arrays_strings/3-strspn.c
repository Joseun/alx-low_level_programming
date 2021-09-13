#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: pointer to the string
 * @accept: pointer to the number of bytes of substring
 *
 * Return: the number of bytes of the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int x;
	int y;
	int length = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0' && accept[y] != s[x]; y++)
		{
			if (s[x] == accept[y])
			{
				length++;
			}

			if (accept[y] == '\0')
			{
				return (length);
			}
		}
	}
	return (length);
}
