#include <stdio.h>
/*#include "holberton.h"
*/
/**
 * main - test for NULL string
 *
 * Return: Always 0
 */
int main(void)
{
	printf(NULL); /* Should not print anything - but will get compile warning */
	_printf(NULL);

	printf("Test: %s\n", NULL); /* Should print: Test: (null) */
	_printf("Test: %s\n", NULL);

	printf("%s\n", NULL);  /* Seg fault */
	_printf("%s\n", NULL);
	return (0);
}