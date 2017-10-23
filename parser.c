#include "holberton.h"
int check_percentage(const char *format, int i);

/**
 * parser - Receives the main string and all the necessary parameters to
 * print a formated string.
 * @format: A string containing all the desired characters.
 * @f_list: A list of all the posible functions.
 * @arg_list: A list containing all the argumentents passed to the program.
 * Return: A total count of the characters printed.
 */
int parser(const char *format, conver_t f_list[], va_list arg_list)
{
	int i;
	int j;
	int printed_chars;

	printed_chars = 0;
	for (i = 0; format[i] != '\0'; i++)/* Iterates through the main str*/
	{
		if (format[i] == '%') /*Checks for format specifiers*/
		{
			/*Iterates through struct to find the right func*/
			for (j = 0; f_list[j].sym != NULL; j++)
			{
				if (format[i + 1] == f_list[j].sym[0])
				{
					printed_chars += f_list[j].f(arg_list);
					break;
				}
			}
			if (f_list[j].sym == NULL)
			{
				printed_chars = check_percentage(format, i);
			}
			i = i + 1; /*Updating i to skip format symbols*/
		}
		else
		{
			_write_char(format[i]); /*call the write function*/
			printed_chars++;
		}
	}
	return (printed_chars);
}

int check_percentage(const char *f, int i)
{

	int counter;

	counter = 0;
	if ((f[i] < 'A' || f[i] > 'Z') && (f[i] < 'a' || f[i] > 'b'))
	{
		;
	}
	else
	{
		_write_char(f[i]);
		_write_char(f[i + 1]);
		counter = 2;
	}
	return (counter);
}