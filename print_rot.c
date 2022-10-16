#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: String to enconde
 * Return: String encode
 */
int rot13(char *s)
{
	int i, j;
	char *normal, *rot13;

	normal = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; normal[j] != '\0'; j++)
		{
			if (s[i] == normal[j])
			{
				_putchar(rot13[j]);
				break;
			}
		}

		if (!normal[j])
			_putchar(s[i]);
	}
	return (i);
}

/**
 * print_R - Prints the rot13'ed string
 * @R: String to be encoded
 *
 * Return: Length of the string encoded
 **/
int print_R(va_list R)
{
	char *p;
	int p_len;

	p = va_arg(R, char *);
	p_len = rot13((p != NULL) ? p : "(ahyy)");

	return (p_len);
}
