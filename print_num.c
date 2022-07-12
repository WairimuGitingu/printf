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
	int k = 0, j, mod = 0;
	int arr[10];

	if (n > 1000000000)
		return (1);

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
		arr[k] =  mod;
		n =  n / 10;
		k++;
	}
	for (j = k - 1; j > -1; j--)
	{
		_putchar(arr[j] + '0');
	}
	return (k);
}
/**
 * print_i - counts and prints all type int
 * @i: argument to be checked
 *
 * Return: Returns the number of characters in the int number
 */

int print_i(va_list i)
{
	
	return (print_int(i));
}
