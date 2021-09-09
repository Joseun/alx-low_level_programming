#include "main.h"
#include <stdio.h>

int main(void)
{
	char s[] = "look up now now or else!\n";
	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
