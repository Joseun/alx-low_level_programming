#include "op.h"

/**
 * mod - prints the modulus of the number as arguments
 *
 * @a: number to be divided
 * @b:  number to be denomenator
 *
 * Return: 1 if error, modulus if success
 */

int mod(int a, int b)
{
	int sum = 0;

	sum = a % b;

	return (sum);
}
