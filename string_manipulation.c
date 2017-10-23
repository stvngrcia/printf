#include "holberton.h"

/**
 * print_reversed - Calls a function to reverse and print a string
 * @arg: Argument passed to the function
 * Return: The amount of characters printed
 */
int print_reversed(va_list arg)
{
	int len;
	char *str;
	char *ptr;

	str = va_arg(arg, char *);
	if (str == NULL)
		return (-1);
	ptr = rev_string(str);

	for (len = 0; ptr[len] != '\0'; len++)
		_write_char(ptr[len]);
	_write_char('\0');
	free(ptr);
	return (len);
}

/**
 * rot13 - Converts string to rot13
 * @list: string to convert
 * Return: converted string
 */
int rot13(va_list list)
{
	int i;
	int x;
	int c;
	char *str;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char u[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	str = va_arg(list, char *);
	if (str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; x <= 48; x++)
		{
			if (str[i] == s[x])
			{
				str[i] = u[x];
				break;
			}
		}
	}
	for (c = 0; str[c] != '\0'; c++)
		_write_char(str[c]);
	return (c);
}
