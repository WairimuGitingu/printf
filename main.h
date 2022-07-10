#ifndef MAIN_H
#define MAIN_H

typedef struct print_all
{
	char *c;
	int (*p)(va_list);
}print_all_t;
int _printf(const char *format, ...);

#endif
