#include <stdio.h>

/**
 * main - prints number of arguments passed into it
 *
 * @argc: number of components in argv array
 * @argv:  array of compoments from command line
 *
 * Return: Always (0) success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
