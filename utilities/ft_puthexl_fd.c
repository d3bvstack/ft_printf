/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 09:28:04 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/02/11 16:26:20 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

// int	ft_puthexl_fd(int n, int fd);
// int	main(void)
// {
// 	int number = 123456;
// 	printf("\n%i\n", ft_puthexl_fd(number, 1));
// }

#include "../ft_printf.h"

int	ft_puthexl_fd(int n, int fd)
{
	char	*hex;
	char	hex_result[9];
	int		i;

	hex = "0123456789abcdef";
	i = 8;
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
	write(fd, &hex_result[i + 1], 8 - i - 1);
	return (8 - i - 1);
}
