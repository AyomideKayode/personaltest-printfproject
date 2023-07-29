#include "main.h"

/**
 * _print_pointer - Print the memory address of a pointer in hexadecimal format.
 * @args_p: va_list argument containing the pointer to print.
 *
 * Return: The number of characters printed.
 */
int _print_pointer(va_list args_p)
{
    void *ptr = va_arg(args_p, void *);

    if (ptr == NULL)
    {
        return (_printf("(nil)"));
    }

    _printf("0x%lx", (unsigned long)ptr);
    return (sizeof(void *) * 2 + 2); /* Size of a pointer in hexadecimal format is 2 times the size of void pointer plus 2 for '0x' */
}