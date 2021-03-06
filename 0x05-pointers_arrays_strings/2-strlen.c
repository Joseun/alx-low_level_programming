#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: pointer to the string
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		s++;
		x++;
	}
	return (x);
}
