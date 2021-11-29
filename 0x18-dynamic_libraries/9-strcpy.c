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
	int x = 0;

	while (src[x])
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';

	return (dest);
}
