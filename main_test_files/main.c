#include "holberton.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int a;
	int number;


	number = 19912507;


	a = _printf("%i, %d\n", number, number);
	printf("%d\n", a);
	a = _printf("% ");
	printf("%d\n", a);
	return (0);
}
