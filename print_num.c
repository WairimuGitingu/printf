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
	int a[10];
	int j, m, n, sum, count;

	n = va_arg(d, int);
	count = 0;
	m = 1000000000;
	a[0] = n / m;
	for (j = 1; j < 10; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}
	if (n < 0)
	{
		_putchar('-');
		count++;
		for (j = 0; j < 10; j++)
			a[j] *= -1;
	}
	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + a[j]);
			count++;
		}
	}
	return (count);
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
