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
	int max;
	int min;

	min = -2147483648;
	max = 2147483647;
	_printf("%d, %d\n", INT_MAX, INT_MIN);
	_printf("%i, %i\n", max, min);
	return (0);
}
