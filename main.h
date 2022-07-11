#ifndef MAIN_H
#define MAIN_H

typedef struct print_all
{
	char *c;
	int (*p)(va_list);
}print_all_t;

int _printf(const char *format, ...);
int print_c(va_list cha);
int print_s(va_list s);
int print_per(va_list p);

#endif
