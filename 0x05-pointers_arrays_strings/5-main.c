#include <stdio.h>
#include "main.h"

int main(void)
{
	char s[11] = "May School";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
