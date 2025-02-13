

// # Step 1: Compile the code and create the library
// make

// # Step 2: Compile test.c with the created library
// gcc -o test test.c libftprintf.a

// # Step 3: Run the executable
// ./test

#include "ft_printf.h"
#include <limits.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>

int	main(void)
{
	char c = '$';
	char *s = "H3llo W0rld";
	void *p = "H3llo W0rld";
	int d = 2147483647;
	int i = -2147483648;
	unsigned int u = 4294967295;
	int x = -154852;
	int X = -999999;

	printf("====== Printf test ======\n");
	printf("-------------------------\n");

	printf("Character: %c\n", c);
	ft_printf("Character: %c\n", c);

	printf("String: %s\n", s);
	ft_printf("String: %s\n", s);

	printf("Pointer: %p\n", p);
	ft_printf("Pointer: %p\n", p);

	printf("Digit: %d\n", d);
	ft_printf("Digit: %d\n", d);

	printf("Integer: %i\n", i);
	ft_printf("Integer: %i\n", i);

	printf("Unsigned integer: %u\n", u);
	ft_printf("Unsigned integer: %u\n", u);

	printf("Lowercase hex: %x\n", x);
	ft_printf("Lowercase hex: %x\n", x);

	printf("Uppercase hex: %X\n", X);
	ft_printf("Uppercase hex: %X\n", X);

	printf("Percentage: %%\n");
	ft_printf("Percentage: %%\n");

	// Edge cases
	printf("\n====== Edge Cases ======\n");
	printf("------------------------\n");

	// Character edge cases
	printf("Character: %c\n", '\0');
	ft_printf("Character: %c\n", '\0');

	// String edge cases
	printf("String: %s\n", "");
	ft_printf("String: %s\n", "");

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wformat-overflow"
	printf("String: %s\n", (char *)NULL);
#pragma GCC diagnostic pop

	ft_printf("String: %s\n", (char *)NULL);

	// Pointer edge cases
	printf("Pointer: %p\n", NULL);
	ft_printf("Pointer: %p\n", NULL);

	// Digit edge cases
	printf("Digit: %d\n", 0);
	ft_printf("Digit: %d\n", 0);

	printf("Digit: %d\n", INT_MAX);
	ft_printf("Digit: %d\n", INT_MAX);

	printf("Digit: %d\n", INT_MIN);
	ft_printf("Digit: %d\n", INT_MIN);

	// Integer edge cases
	printf("Integer: %i\n", 0);
	ft_printf("Integer: %i\n", 0);

	printf("Integer: %i\n", INT_MAX);
	ft_printf("Integer: %i\n", INT_MAX);

	printf("Integer: %i\n", INT_MIN);
	ft_printf("Integer: %i\n", INT_MIN);

	// Unsigned integer edge cases
	printf("Unsigned integer: %u\n", 0);
	ft_printf("Unsigned integer: %u\n", 0);

	printf("Unsigned integer: %u\n", UINT_MAX);
	ft_printf("Unsigned integer: %u\n", UINT_MAX);

	// Lowercase hex edge cases
	printf("Lowercase hex: %x\n", 0);
	ft_printf("Lowercase hex: %x\n", 0);

	printf("Lowercase hex: %x\n", UINT_MAX);
	ft_printf("Lowercase hex: %x\n", UINT_MAX);

	// Uppercase hex edge cases
	printf("Uppercase hex: %X\n", 0);
	ft_printf("Uppercase hex: %X\n", 0);

	printf("Uppercase hex: %X\n", UINT_MAX);
	ft_printf("Uppercase hex: %X\n", UINT_MAX);

	return (0);
}