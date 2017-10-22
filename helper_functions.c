#include "holberton.h"
/**
 * length - Calculates the length of a number
 * num: The number for which the length is being calculated
 * Return: An integer representing the length of a number
 */
int length(unsigned int num)
{
	int i;

	for (i = 0; num > 0; i++)
		num = num / 10;
	return (i);
}

/**
 * rev_string - reverses a string in place
 *
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int len;
	int head;
	char tmp;

	for (len = 1; s[len]; len++)
	{}

	for (head = 0; head < len; head++, len--)
	{
		tmp = s[len - 1];
		s[len - 1] = s[head];
		s[head] = tmp;
	}
}

/**
 * write_base - sends characters to be written on standard output
 * @str: String to parse
 */
void write_base(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_write_char(str[i]);
}