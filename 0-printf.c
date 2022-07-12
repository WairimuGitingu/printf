#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * specifiers_checker - pointer function that checks for format specifiers
 * @format: type to be checked
 *
 * Return: pionter to variable argument, va_list
 */
static int (*specifiers_checker(const char *format))(va_list)
{
	unsigned int i;
	print_all_t arr[] = {
		{"c", print_c},
		{"s", print_s},
		/*{"p", print_per},*/
		{"d", print_int},
		{"i", print_i},
		{NULL, NULL}
	};

	for (i = 0; arr[i].c != NULL; i++)
	{
		if (*(arr[i].c) == *format)
		{
			break;
		}
	}
	return (arr[i].p);
}
/**
 * _printf - a function that produces output according to a format
 * @format: is a character string
 *
 * Return: the number of characters printed
 *	 (excluding the null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;
	va_list args;
	int (*p)(va_list);

	if (format == NULL)
		return (-1);
	va_start(args, format);

	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			count++;
		}
		if (!format[i])
			return (count);
		p = specifiers_checker(&format[i + 1]);
		if (p != NULL)
		{
			count += p(args);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(args);
	return (count);
}
