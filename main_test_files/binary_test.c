#include "holberton.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{

	int number;

	number = 12398;
	/*---- Test cases for binary conversion ----*/
	_printf("--> %b\n", number); /*Expected output: 11000001101110*/
	return (0);
}
