#include "main.h"

/**
 * *_strncat - appends a string to another
 *
 * @dest: pointer to buffer
 * @src: pointer to string
 * @n: integer for number of bytes
 *
 * Return: the pointer to @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int srclen, len = 0, y = 0, x = 0, a, destlen;

	while (dest[x] != '\0')
	{
		x++;
		len++;
	}
	destlen = len;

	while (y < n && src[y] != '\0')
	{
		y++;
	}
	srclen = y;

	for (a = 0; a < srclen; a++)
	{
		dest[destlen + a] = src[a];
	}
	dest[destlen + a] = '\0';
	return (dest);
}
