/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:43:20 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/02/11 16:26:29 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_count(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i += 1;
	while (n != 0)
	{
		n /= 10;
		i += 1;
	}
	return (i);
}

int	ft_putnbr_fd(int n, int fd)
{
	int	number;

	number = n;
	if (number == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (number < 0)
		{
			number = -number;
			ft_putchar_fd('-', fd);
		}
		if (number > 9)
		{
			ft_putnbr_fd(number / 10, fd);
		}
		ft_putchar_fd(number % 10 + '0', fd);
	}
	return (ft_count(n));
}
