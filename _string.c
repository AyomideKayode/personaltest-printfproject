#include "printf.h"
/**
 */

int _print_string(char *s)
{
	int i = 0, str_val = 0;

	if (s)
	{
		while (s[i] != '\0')
		{
			_putchar(s[i]);
			str_val += 1;
			i++;
		}
	}
	return (str_val);
}
