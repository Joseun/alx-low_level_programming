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
	int x = 0;

	while  (src[x] != '\0' && x < n)
	{
		dest[x] = src[x];
		x++;
	}

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
