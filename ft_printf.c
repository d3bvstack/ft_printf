/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 09:28:08 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/11/06 16:11:25 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

static int	ft_parse(const char *format, va_list argument, int fd)
{
	int	i;

	i = 0;
	if (*(format + 1) == 'c')
		i = ft_putchar_fd(va_arg(argument, int), fd);
	else if (*(format + 1) == 's')
		i = ft_putstr_fd(va_arg(argument, char *), fd);
	else if (*(format + 1) == 'p')
		i = ft_putptr_fd(va_arg(argument, void *), fd);
	else if (*(format + 1) == 'd' || *(format + 1) == 'i')
		i = ft_putnbr_fd(va_arg(argument, int), fd);
	else if (*(format + 1) == 'u')
		i = ft_putuns_fd(va_arg(argument, unsigned int), fd);
	else if (*(format + 1) == 'x')
		i = ft_puthexl_fd(va_arg(argument, unsigned int), fd);
	else if (*(format + 1) == 'X')
		i = ft_puthexu_fd(va_arg(argument, unsigned int), fd);
	else if (*(format + 1) == '%')
		i = ft_putchar_fd('%', fd);
	else
		return (i);
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	arguments;
	int		i;

	if (!format)
		return (0);
	va_start(arguments, format);
	i = 0;
	while (*format)
	{
		if (*format == '%')
		{
			i += ft_parse(format, arguments, STDOUT_FILENO);
			format += 2;
		}
		else
		{
			i += ft_putchar_fd(*format, 1);
			format++;
		}
	}
	va_end(arguments);
	return (i);
}

int	ft_dprintf(int fd, const char *format, ...)
{
	va_list	arguments;
	int		i;

	if (!format)
		return (0);
	va_start(arguments, format);
	i = 0;
	while (*format)
	{
		if (*format == '%')
		{
			i += ft_parse(format, arguments, fd);
			format += 2;
		}
		else
		{
			i += ft_putchar_fd(*format, fd);
			format++;
		}
	}
	va_end(arguments);
	return (i);
}
