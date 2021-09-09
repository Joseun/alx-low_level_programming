#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: pointer to the array
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int x, y, z;

	z = n - 1;

	for (x = 0; x < n / 2; x++)
	{
		y = a[x];
		a[x] = a[z];
		a[z--] = y;
	}
}
