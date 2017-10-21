#include "holberton.h"

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
	int i;
	int j;
	int printed_chars;
	conver_t f_list[] = {
		{"c", print_char},
		{NULL, NULL}
	};
	va_list arg_list;

	va_start(arg_list, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)/* Iterates through the main str*/
	{
		if (format[i] == '%') /*Checks for format specifiers*/
		{
			/*Iterates through struct to find the right func*/
			for (j = 0; f_list[i].sym != NULL; j++)
			{
				if (format[i + 1] == f_list[j].sym[0])
				{
					f_list[j].f(arg_list);
					break;
				}
			}
			i = i + 1; /*Updating i to skip format symbols*/
		}
		else
		{
			_write_char(format[i]); /*call the write function*/
		}
		printed_chars++;
	}
	_write_char('\n');
	return (printed_chars);
}
