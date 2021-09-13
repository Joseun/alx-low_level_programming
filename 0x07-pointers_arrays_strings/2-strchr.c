#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: pointer to the string
 * @c: pointer to the first occurence of the character
 *
 * Return: the pointer to c if found, NULL if not found
 */

char *_strchr(char *s, char c)
{
	int x = 0;

	while (s[x] != '\0')
	{
		if (s[x] == c)
		{
			return (&s[x]);
		}
		x++;
	}

	return ('\0');
}
