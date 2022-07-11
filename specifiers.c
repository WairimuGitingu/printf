#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_c - Prints character
 * @c: Charater to print
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

/**
 * print_per - a function that accounts for %% as an input
 * @p: A parameter that stores a % and prints it
 *
 * Return: Always  1;
 */
int print_per(va_list p)
{
	p = '%';

	_putchar(p);
	return (1);
}
