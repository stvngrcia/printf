#include "holberton.h"
#include <stdio.h>
#include <limits.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int a;

	a = _printf("%s\n", "hello");
	_printf("%d\n", a);
	a = printf("%s\n", "hello");
	printf("%d\n", a);
	/*_printf("%R", "Holberton school");*/
	return (0);
}