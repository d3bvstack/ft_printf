/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 09:28:08 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/02/10 16:19:10 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>
#include <stdio.h>

void	ft_parse(const char *format, va_list argument)
{
	if (*(format + 1) == 'c')
		ft_putchar_fd(va_arg(argument, char), 1);
	else if (*(format + 1) == 's')
		ft_putstr_fd(va_arg(argument, char *), 1);
	else if (*(format + 1) == 'p')
		ft_putptr_fd(va_arg(argument, void *), 1);
	else if (*(format + 1) == 'd' || *(format + 1) == 'i')
		ft_putnbr_fd(va_arg(argument, int), 1);
	else if (*(format + 1) == 'u')
		ft_putnbr_fd(va_arg(argument, unsigned int), 1);
	else if (*(format + 1) == 'x')
		ft_puthexl_fd(va_arg(argument, unsigned int), 1);
	else if (*(format + 1) == 'X')
		ft_puthexu_fd(va_arg(argument, unsigned int), 1);
	else if (*(format + 1) == '%')
		ft_putchar_fd('%', 1);
	else
		return (1);
}

int	ft_printf(const char *format, ...)
{
	va_list	arguments;

	if (*format == '\0')
		return (0);
	va_start(arguments, format);
	while (*format != '\0')
	{
		if (*format != '%')
			ft_putchar_fd(*format, 1);
		if (*format == '%')
		{
			ft_parse(format, arguments);
		}
	}
	va_end(arguments);
	return (0);
}
