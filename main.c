#include "holberton.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char c;
	int a;

	c = 'S';
	a = _printf("%c", c);
	printf("%d\n", a);
	return (0);
}
