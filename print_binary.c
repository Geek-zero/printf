#include "main.h"

/**
 * print_b - Print a number in base 2
 * @b: Number to print in base 2
 *
 * Return: Length of the numbers in binary
 **/
int print_b(va_list b)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(b, unsigned int), 2);

	size = print(p_buff);

	return (size);
}
