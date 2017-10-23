#include "holberton.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int a;

    a = _printf("%b\n", -98);
    printf("%d\n", a);
    return (0);
}
