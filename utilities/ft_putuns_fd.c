/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 08:30:01 by codespace         #+#    #+#             */
/*   Updated: 2025/02/13 09:33:41 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_count(unsigned int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i += 1;
	while (n != 0)
	{
		n /= 10;
		i += 1;
	}
	return (i);
}

int	ft_putuns_fd(unsigned int n, int fd)
{
	int	i;

	i = ft_count(n);
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd(n % 10 + '0', fd);
	return (i);
}
