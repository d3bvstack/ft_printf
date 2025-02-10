#include <stdarg.h>
#include <stdio.h>

int	average(int n, ...)
{
	va_list	ap;
	int		total;
	int		iterator;

	va_start(ap, n);
	total = 0;
	iterator = 0;
	while (iterator < n)
	{
		total += va_arg(ap, int);
		iterator++;
	}
	va_end(ap);
	return (total / n);
}

int	main(void)
{
	int average_age;

	average_age = average(5, 18, 45, 32, 100, 7);
	printf("The average age is: %d\n", average_age);
}