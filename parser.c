#include "holberton.h"

int _printf(const char *format, ...)
{
	int i;
	int j;
	int printed_chars;
	va_list arg_list;
	conver_t f_list [] = {
		{'c', print_char},
		{NULL, NULL}
	};

	va_start(arg_list, format);
	if (format == NULL)
		return (-1);
	/* Iterates through the main string*/
	for (i = 0; format[i] != '\0'; i++)
	{
		/*Checks for format specifiers*/
		if (format[i] == '%')
		{
			/*Iterates through struct to find the right func*/
			for (j = 0; f_list[i].sym != NULL; i++)
			{
				if (format[i + 1] == f_list[i].sym)
				{
					printed_chars = f_list[i].f;
					break;
				}
			}
			/*Updating i to skip format symbols*/
			i = i + 2;
		}
		else
		{
			/*call the write function*/
			_write_char(format[i]);
		}
		/*Updating the count for characters printed*/
		printed_chars++;
	}
	return (printed_chars);
}
