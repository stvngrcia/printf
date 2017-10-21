#include "holberton.h"

/**
 * _write_char - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _write_char(char c)
{
	return (write(1, &c, 1));
}
