#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line to std out
 *
 * @a: pointer to an element in the array to print
 * @n: number of elements of the arrray to be printed
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x == 0)
		{
		printf("%d", a[x]);
		}
		else
		{
			printf(", %d", a[x]);
		}
	}
	printf("\n");
}
