#include "holberton.h"
#include <stdio.h>
/**
 * print_binary - Converts a number from base 10 to binary
 * @list: List of arguments passed to this function
 * Return: The length of the number printed
 */
int print_binary(va_list list)
{
	int num;
	int i;
	int len;
	char *str;

	num =  va_arg(list, unsigned int);
	len = length(num);
	str = malloc (sizeof(int) * len + 1);
	if (str == NULL)
		return (1);
	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		num = num / 2;
	}
	str[i] = '\0';
	rev_string(str);
	write_base(str);
	free(str);
	return (len);
}
