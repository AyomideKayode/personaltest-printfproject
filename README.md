# Custom `printf` function - ALX Project

#### Okay, let's see how it goes.

* Trying to create a customised Printf function.
* This repo will be used as my testing ground for the printf project provided by alx in the ALX SE program.
* Here we go: the compilation code will be `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c`

## Table of Content
+ [Description](#description)
+ [Prototype](#prototype)
+ [Return Value](#return-value)
+ [Supported Conversion Specifiers](#supported-conversion-specifiers)
+ [Instructions](#instructions)
+ [Example Usage](#example-usage)
+ [Note](#note)


## Description

This project aims to create a custom implementation of the `printf` function in C. The function will produce output according to a given format string, which can include conversion specifiers for characters, strings, and the percent symbol. The function will write the output to the standard output stream (stdout).

## Prototype

```c
int _printf(const char *format, ...);
```

## Return Value

The `_printf` function will return the number of characters printed (excluding the null byte used to end output to strings).

## Supported Conversion Specifiers

The custom `printf` function will handle the following conversion specifiers:

- `%c`: Print a single character.
- `%s`: Print a null-terminated string.
- `%%`: Print a percent symbol.

Additionally, the following conversion specifiers for integers will also be handled:

- `%d`: Print a signed integer.
- `%i`: Print a signed integer.
- `%b`: Print (convert) binary (to) integer.

## Instructions

1. Clone the repository from GitHub: [printf](https://github.com/amimanye/printf).

2. Implement the custom `_printf` function in the provided source files. You are required to handle the specified conversion specifiers: `%c`, `%s`, `%%`, `%d`, and `%i`.

3. Test your implementation with various test cases to ensure correctness and accuracy.

## Example Usage

```c
#include "printf.h"

int main(void)
{
    int len;

    len = _printf("Hello, %s!\n", "world");
    _printf("The number of characters printed is: %d\n", len);

    _printf("%c\n", 'A');
    _printf("%%\n");

    return (0);
}
```

## Note

- The current custom `printf` function does not need to handle flag characters, field width, precision, or length modifiers, as specified in the project instructions.

- The buffer handling of the standard C library `printf` function does not need to be reproduced in this custom implementation.
