#include "main.h"

/**
 * _strlen_recursion - print a string followed by a new line
 *
 * @s: pointer to string
 *
 * Return: Always 0 Success
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
