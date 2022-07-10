#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_c - Prints character
 * @c: Charater to print
 *
 * Return: Always 1
 */

int print_c(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}
