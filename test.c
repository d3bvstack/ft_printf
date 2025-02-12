#include <stdarg.h>
#include <stdio.h>

int	main(void)
{
	char c;
	char *s;
	void *p;
	int d;
	int i;
	unsigned int u;
	int x;
	int X;

	c = '$';
	s = "H3llo W0rld";
	d = 1234567;
	i = -1234567;
	u = 4294967295;
	x = -154852;
	X = -999999;
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
	printf("Unsigend integer: %u\n", u);
	ft_printf("Unsigend integer: %u\n", u);
	printf("Lowercase hex: %x\n", x);
	ft_printf("Lowercase hex: %x\n", x);
	printf("Uppercase hex: %X\n", X);
	ft_printf("Uppercase hex: %X\n", X);
	printf("Percentage: %%\n");
	ft_printf("Percentage: %%\n");
	return (0);
}