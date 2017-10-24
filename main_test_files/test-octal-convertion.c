#include "holberton.h"
#include <stdio.h>

int main(void)
{
	int a;
	int b;

	a = 145;

	b = _printf("%o\n", a);
	printf("> %i\n", b);
	printf("%o\n", a);
	return (0);
}