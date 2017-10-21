#ifndef PRINT_F
#define PRINT_F

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct convert - defines a structure for symbols and functions
*
* @sym: The operator
* @f: The function associated
*/
typedef struct convert
{
	char sym;
	int (*f)(char , va_arg);
} conver_t

int _printf(const char *format, ...);
int _write_char(char);

#endif
