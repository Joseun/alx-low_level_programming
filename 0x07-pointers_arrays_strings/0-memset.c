#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to the memory area
 * @b: constant byte
 * @n: bytes of the memory
 * Return: the pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	for (; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}
