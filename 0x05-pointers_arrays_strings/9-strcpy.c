#include "main.h"

/**
 * *_strcpy - copies string to the the buffer
 *
 * @dest: pointer to buffer
 * @src: pointer to string
 *
 * Return: the pointer to @dest
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0, y;

	while (src[x] != '\0')
	{
		x++;
	}

	for (y = 0; y < x; y++)
	{
		dest[x] = src[x];
	}
	dest[y] = '\0';
	return (dest);
}
