/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 09:28:08 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/02/10 13:42:13 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>
#include <stdio.h>

int	ft_parse(const char *format, va_list)
{
	while (*format != '\0')
	{
		if (*++format == 'c')
			ft_putchar_fd(va_arg(argument, char), 1);
		else if (*++format == 's')
			ft_putstr_fd(va_arg(argument, char *), 1);
		else if (*++format == 'p')
			ft_putptr_fd(va_arg(argument, void *), 1);
		else if (*++format == 'd' || *++format == 'i')
			ft_putnbr_fd(va_arg(argument, int), 1);
		else if (*++format == 'u')
			ft_putnbr_fd(va_arg(argument, unsigned int), 1);
		else if (*++format == 'x')
			ft_puthexl_fd(va_arg(argument, unsigned int), 1);
		else if (*++format == 'X')
			ft_puthexu_fd(va_arg(argument, unsigned int), 1);
		else if (*++format == '%')
			ft_putchar_fd('%', 1);
		else
			return (1);
	}
}

int	ft_printf(const char *, ...)
{
	va_list	arguments;

	va_start(arguments, *);
	ft_parse(*, va_arg(arguments, char));
}
