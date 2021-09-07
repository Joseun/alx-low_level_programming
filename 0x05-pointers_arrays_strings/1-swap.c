#include "main.h"

/**
 * swap_int - swaps the value of one variable with that of another
 *
 * @a: pointer to the first variable
 * @b: pointer to the second variable
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
