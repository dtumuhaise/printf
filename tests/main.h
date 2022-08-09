#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>

/**
 * struct format - structure
 * @fmt: index
 * @func: pointer to function
 */
typedef struct st_fmt
{
	char *fmt;
	int (*func)(va_list list);
} st_fmt;


int _printf(const char *format, ...);
int _putchar(char c);
int func_string(va_list);
int func_char(va_list);
int func_percent(va_list);
int get_match_func(const char *, va_list, st_fmt st_format[]);
int func__digit(va_list);


#endif