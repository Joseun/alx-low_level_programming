#include "main.h"

/**
 * string_toupper - changes lowercase strings to uppercase
 *
 * @s: pointer to the string to change
 *
 * Return: the resulting string
 */

char *string_toupper(char *)
{
	int x;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
