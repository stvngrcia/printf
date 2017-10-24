#include "holberton.h"
#include <stdio.h>
/**
 * b_length - Calculates the length for a binary number
 * @num: The number for which the length is being calculated
 * Return: An integer representing the length of a number
 */
unsigned int b_length(unsigned int num)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
	{
		num = num / 2;
	}
	return (i);
}

/**
 * rev_string - reverses a string in place
 *
 * @s: string to reverse
 * Return: A pointer to a character
 */
char *rev_string(char *s)
{
	int len;
	int head;
	char tmp;
	char *dest;

	for (len = 1; s[len] != '\0'; len++)
	{}

	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);

	_memcpy(dest, s, len);
	for (head = 0; head < len; head++, len--)
	{
		tmp = dest[len - 1];
		dest[len - 1] = dest[head];
		dest[head] = tmp;
	}
	return (dest);
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

/**
 * _memcpy - copy memory area
 * @dest: Destination for copying
 * @src: Source to copy from
 * @n: The number of bytes to copy
 * Return: The _memcpy() function returns a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * octal_length - Calculates the length for an octal number
 * @num: The number for which the length is being calculated
 * Return: An integer representing the length of a number
 */
unsigned int octal_length(unsigned int num)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
	{
		num = num / 8;
	}
	return (i);
}
