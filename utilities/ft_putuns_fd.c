/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 08:30:01 by codespace         #+#    #+#             */
/*   Updated: 2025/12/05 23:56:25 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuns_fd(unsigned int n, int fd)
{
	int	i;

	i = 0;
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	i += ft_putchar_fd(n % 10 + '0', fd);
	return (i);
}
