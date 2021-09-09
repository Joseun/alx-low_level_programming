#include "main.h"
#include <stdio.h>

int main(void)
{
	char str[] = "look up now now or else!\n";
	char *ptr;

	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
