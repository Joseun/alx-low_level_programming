#include "main.h"

/**
 * *_strcat - appends a string to another
 *
 * @dest: pointer to buffer
 * @src: pointer to string
 *
 * Return: the pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, y = 0, x = 0, z = 0, a, destlen, srclen;

	while (dest[x] != '\0')
	{
		x++;
		len++;
	}

	destlen = len;

	while (src[y] != '\0')
	{
		y++;
		z++;
	}

	srclen = z;

	for (a = 0; a < srclen; a++)
	{
		dest[destlen + a] = src[a];
	}
	dest[destlen + a] = '\0';

	return (dest);
}
