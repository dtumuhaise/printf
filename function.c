#include "main.h"

/**
 * func_string - print a string
 * @list: the list of arguments the function _printf is recieving
 * Return: the number of chars
 */

int func_string(va_list list)
{
	int i;
	char *ptr;

	ptr = (va_arg(list, char *));
	if (ptr == 0)
	{
		ptr = "(null)";
	}
	for (i = 0; ptr[i] != 0; i++)
	{
		_putchar(ptr[i]);
	}
	return (i);
}

/**
 * func_char - print %
 * @list: the list of args of function
 * Return: 1 if char or 0 otherwise
 */

int func_char(va_list list)
{
	char c;

	c = (va_arg(list, int));
	_putchar(c);
	return (1);
}

/**
 * func_percent - print %
 * @list: list of args
 * Return: 1
 */

int func_percent(__attribute__((unused)) va_list list)
{
	_putchar('%');
	return (1);
}
