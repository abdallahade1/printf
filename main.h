#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/* helping Functions */
int _strlen(char *s);

/**
 * struct format_specifier - struct specifiers
 * @specifier: abbreviated char
 * @f: associated function
 */
typedef struct format_specifier
{
	char specifier;
	int (*f)(va_list);
} sep;
/* specifiers functions */
int percent_specifier(va_list args_lst);
int c_specifier(va_list args_lst);
int s_specifier(va_list args_lst);

int _printf(const char *format, ...);

#endif

