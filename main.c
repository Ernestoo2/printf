#include "main.h"
#include <stdio.h>

int main(void)
{
	/* %s %c %% */
	int n = 0;
	char s[] = "ernest";
	int c;
	c = 54;

	_printf("%s Hello, welcome to my sanbox\n", s);
	_printf("my name is: %c %s\n", 'E', s);
	_printf("%d\n", c);
	n = _printf("Hello %s\n", "World");
	printf("n: %d\n", n);

	return (0);
}
