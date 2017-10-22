#include "holberton.h"
int get_exponent(int);
int number_length(unsigned int);
/**
 * print_number - prints numbers digit by digit
 * @num: number to print
 * Return: The total printed numebers
 */
int print_number(int num)
{
	int length;
	unsigned int exponent;
	unsigned int number;
	unsigned int leftover;
	unsigned int n;

	n = num;
	if (num < 0)
	{
		n = -num;
		_write_char('-');
	}
	length = number_length(n);
	exponent = get_exponent(length);

	while (exponent > 0)
	{
		number = n / exponent;
		_write_char(number + 48);
		leftover = n - (number * exponent);
		exponent = exponent / 10;

		if (leftover < exponent)
		{
			_write_char('0');
			exponent = exponent / 10;
		}
		n = leftover;
	}
	return (length);
}
/**
 * get_exponent - Calculates the exponent of a number
 * @length: lenght of number
 * Return: the exponent
 */
int get_exponent(int length)
{
	int exponent;

	for (exponent = 1; length > 1; length--)
		exponent = exponent * 10;
	return (exponent);
}
/**
 * number_length - Calculates the lenght of a number
 * @number: number to get the length of
 * Return: the lenght of a number
 */
int number_length(unsigned int number)
{
	int counter;

	for (counter = 0; number > 0; counter++)
	{
		number = number / 10;
	}
	return (counter);
}
