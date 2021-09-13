#include "main.h"

/**
 * set_string - sets the value of the pointer to char
 *
 * @s: pointer to the string
 * @to: string to set value to
 *
 * Return: always 0
 */

void set_string(char **s, char *to)
{
	*s = to;
}
