#include "main.h"

/**
 * _print_binary - print the converted integer from
 * arguement to binary.
 * @args_p: argument parameter to convert.
 *
 * Return: length of binary digit
 */

int _print_binary(va_list args_p)
{
	unsigned int n = va_arg(args_p, unsigned int);
	int len = 0;
	unsigned int temp = n;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	/* Calculate the number of binary digits (length) */
	while (temp > 0)
	{
		len++;
		temp >>= 1;
	}

	/* Print the binary representation in reverse order */
	while (len > 0)
	{
		len--;
		_putchar((n & (1 << len)) ? '1' : '0');
	}

	return (len);
	/* The length is already calculated correctly, so len is returned. */
}
