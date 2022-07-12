#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/**
 * struct print_all - prints all types
 * @c: format specifier
 * @p: pointer function to argument va_list
 */
typedef struct print_all
{
	char *c;
	int (*p)(va_list);
} print_all_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list cha);
int print_s(va_list s);
int print_int(va_list d);
/*int print_per(va_list p);*/

#endif
