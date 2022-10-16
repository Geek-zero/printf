#include "main.h"

/**
 * print_r - Print a string in reverse
 * @r: List of arguments
 *
 * Return: Length of the string
 **/
int  print_r(va_list r)
{
	int i, size;
	const char *str;

	str = va_arg(r, const char *);

	size = _strlen(str);

	for (i = size - 1; i >= 0; i--)
		_putchar(str[i]);

	return (size);
}
