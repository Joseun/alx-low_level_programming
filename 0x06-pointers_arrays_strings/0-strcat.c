#include "main.h"

/**
 * _strcat - appends a string to another
 *
 * @dest: string ton append to
 * @src: string to add
 *
 * Return: the pointer to resulting string
 */

char *_strcat(char *dest, char *src)
{
	int y = 0, x = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	while (src[y] != '\0')
	{
		dest[x] =  src[y];
		y++;
		x++;
	}

	dest[x] = '\0';

	return (dest);
}
