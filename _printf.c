#include "main.h"

/**
 * _printf - print char or string
 * @format: character string
 * Return: number of characters being printed
 */

int _printf(const char *format, ...)
{
	st_fmt st_format[] = {
		{"c", func_char},
		{"s", func_string},
		{"%", func_percent},
		{NULL, NULL}};

	va_list list;
	int count = 0;

	va_start(list, format);
	count = get_match_func(format, list, st_format);
	va_end(list);
	return (count);
}
