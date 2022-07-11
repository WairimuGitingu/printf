#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_c - Prints character
 * @cha: Charater to print
 *
 * Return: Always 1
 */

int print_c(va_list cha)
{
	char ch = (char)va_arg(cha, int);

	_putchar(ch);
	return (1);
}

/**
 * print_s - prints out string
 * @s: string to print
 *
 * Return: number of characters printed, i
 */
int print_s(va_list s)
{
	int i = 0;
	char *st = va_arg(s, char *);

	if (st == NULL)
		st = "(null)";
	while (st[i])
	{
		_putchar(st[i]);
		i++;
	}
	return (i);
}
