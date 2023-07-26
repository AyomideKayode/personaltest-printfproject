/** Created this file to help with Task 3 of the project that requires us me to 
 * Handle the following conversion specifiers: u,o,x and X.
 */

/**
 * _unsigned_dec_int - Print the decimal representation of an unsigned integer.
 * @args_p: Argument containing the unsigned integer to print.
 *
 * Return: Number of digits printed.
 */
int _unsigned_dec_int(va_list args_p)
{
	unsigned int n = va_arg(args_p, unsigned int);
	return print_unsigned_number(n);
}
