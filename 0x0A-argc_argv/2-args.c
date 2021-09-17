#include <stdio.h>

/**
 * main - prints the arguments passed into it
 *
 * @argc: number of components in argv array
 * @argv:  array of compoments from command line
 *
 * Return: Always (0) success
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
