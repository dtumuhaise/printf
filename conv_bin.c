#include "main.h"
/**
 * bin_oct_hex_convert - convert a number into binary, octal or hexadecimal
 * @num: Its the number given to convert
 * @base: is the base which the number will be divided
 * @flag: flag
 * Return: The number of characteres printed
 */

int bin_oct_hex_convert(unsigned int num, int base, int flag)
{
	char hexUpcase[] = "0123456789ABCDEF";
	char hexLowcase[] = "0123456789abcdef";
	char array[2001];
	char *ptr;
	int i = 2000, j = 0;

	ptr = &array[2000];
	*ptr = '\0';

	do {
		if (flag != 0)
			*--ptr = hexUpcase[num % base];
		else
			*--ptr = hexLowcase[num % base];
		num = num / base;
		i--;
	} while (num != 0);

	for (j = i; array[j] != 0; j++)
	{
		_putchar(array[j]);
	}
	return (2000 - i);
}
