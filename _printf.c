#include "main.h"

/**
 * _printf - print char or string
 * @fomart: character string
 * Return: number of characters being printed
 */

int _printf(const char *format, ...)
{
	st_fmt st_format[] = {
		{"c", func_char},
		{"s", func_string},
		{"%", func_percent},
		{"d", func_digit},
		{"i", func_digit},
		{"b", func_binary_convert},
		{"u", func_unsig_int},
		{"o", func_octal_convert},
		{"x", func_hex_Lowcase_convert},
		{"X", func_hex_Upcase_convert},
		{"S", func_stringUppercase},
		{"r", func_revstr},
		{NULL, NULL}};

	va_list list;
	int count = 0;

	va_start(list, format);
	count = get_match_func(format, list, st_format);
	va_end(list);
	return (count);
}
