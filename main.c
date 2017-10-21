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
	char *str;
	int a;

	c = 'G';
	str = "steven";
	a = _printf("%s%c%%\n", str, c);
	printf("%d\n", a);
	return (0);
}
