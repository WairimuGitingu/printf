#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_int - counts and prints out decimal numbers
 * @d: argument to be checked
 *
 * Return: Returns the number of characters in a decimal number
 */
int print_int(va_list d)
{
	int n = va_arg(d, int);
	int i = 0, j, mod = 0;
	int arr[10];

	if (n < 0)
	{
		n *= (-1);
		_putchar('-');
	}

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (n != 0)
	{
		mod = n % 10;
		arr[i] =  mod;
		n =  n / 10;
		i++;
	}
	for (j = i - 1; j > -1; j--)
	{
		_putchar(arr[j] + '0');
	}
	return (i);
}
