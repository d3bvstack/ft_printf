/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:43:20 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/02/11 13:22:48 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

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

void	ft_putnbr_fd(int n, int fd)
{
	int	n_2;

	n_2 = n;
	if (n_2 == "-2147483648")
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n_2 < 0)
		{
			n_2 = -n_2;
			ft_putchar_fd('-', fd);
		}
		if (n_2 > 9)
		{
			ft_putnbr_fd(n_2 / 10, fd);
		}
		ft_putchar_fd(n_2 % 10 + '0', fd);
	}
	return (ft_count(n));
}
