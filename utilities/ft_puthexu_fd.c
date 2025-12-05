/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexu_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 09:28:04 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/12/05 23:56:25 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexu_fd(unsigned long n, int fd)
{
	char	*hex;
	char	hex_result[17];
	int		i;

	hex = "0123456789ABCDEF";
	i = 16;
	hex_result[i] = '\0';
	i--;
	if (n == 0)
	{
		hex_result[i] = '0';
		i--;
	}
	else
	{
		while (n > 0 && i >= 0)
		{
			hex_result[i] = hex[n % 16];
			n /= 16;
			i--;
		}
	}
	write(fd, &hex_result[i + 1], 16 - i - 1);
	return (16 - i - 1);
}
