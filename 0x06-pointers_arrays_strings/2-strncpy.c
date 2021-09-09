#include "main.h"

/**
 * *_strncpy - copies string to the the buffer
 *
 * @dest: pointer to buffer
 * @src: pointer to string
 * @n: integer number of bytes
 *
 * Return: the pointer to @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0, len = 0;

	while  (src[x++])
	{
		len++;
	}
	for (x = 0; src[x] && x < n; x++)
	{
		dest[x] = src[x];
	}

	for (x = 0; x < n; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}
