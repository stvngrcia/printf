#include "holberton.h"
/**
 * print_binary - Converts a number from base 10 to binary
 * @list: List of arguments passed to this function
 * Return: The length of the number printed
 */
int print_binary(va_list list)
{
	long int num;
	int i;
	int len;
	char *str;
	char *rev_str;

	num =  va_arg(list, int);
	if (num < 0)
	{
		_write_char('-');
		num = num * -1;
	}
	len = b_length(num);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);

	if (num == 0)
	{
		_write_char('0');
		return (1);
	}
	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		num = num / 2;
	}
	str[i] = '\0';
	rev_str = rev_string(str);
	if (rev_str == NULL)
		return (-1);
	write_base(rev_str);
	free(str);
	free(rev_str);
	return (len);
}
