#include "main.h"

/**
 * _strlen_recursion - finds the length of a string
 * @s: the pointer to the string
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * is_palind_recursive - checks if two chars of a string are equal
 * @s: string to be checked
 * @n: pointer to first char
 * @x: pointer to the last char
 * Return: 1 if equal, else 0
 */

int is_palind_recursive(char *s, int n, int x)
{
	if (n == x)
	{
		return (1);
	}
	if (n == x - 1)
	{
		return (s[n] == s[x]);
	}
	if (s[n] != s[x])
	{
		return (0);
	}
	return (is_palind_recursive(s, n + 1, x - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to string
 * Return: 1 if string is palindrome else 0
 **/
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);

	if (len == 0 || *s != s[len - 1])
	{
		return (0);
	}
	return (is_palind_recursive(s, 0, len - 1));
}
