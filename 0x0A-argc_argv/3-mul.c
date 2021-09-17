#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiples the arguments passed into it
 *
 * @argc: number of components in argv array
 * @argv:  array of compoments from command line
 *
 * Return: 1 if error, 0 if success
 */

int main(int argc, char *argv[])
{
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int x = atoi(argv[1]);
		int y = atoi(argv[2]);
		int z = x * y;

		printf("%d\n", z);
		return (0);
	}
}
