#include "holberton.h"

/**
 * print_number - print given number
 * @args: list to retrieve number from
 *
 * Return: number of chars printed
 */
int print_number(va_list args)
{
	int n = va_arg(args, int);
	int div = 1;
	int len = 0;
	unsigned int num;

	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;

	while (num / div > 9)
		div *= 10;

	while (div != 0)
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
