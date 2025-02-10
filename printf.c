#include <stdarg.h>
#include <stdio.h>

int	main(void)
{
	char c = 'D';
	char *s = "Hello World";
	void *p;
	int d = -124;
	int i = -124;
	unsigned int u = 124;
	int x = -124;
	int X = -124;

	printf("====== Printf test ======\n");
	printf("-------------------------\n");
	printf("Character: %c\n", c);
	printf("String: %s\n", s);
	printf("Void pointer: %p\n", p);
	printf("Digit: %d\n", d);
	printf("Integer: %i\n", i);
	printf("Unsigend integer: %u\n", u);
	printf("Lowercase hex: %x\n", x);
	printf("Uppercase hex: %X\n", X);
	printf("Percentage: %%\n");
	return (0);
}