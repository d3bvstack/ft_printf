/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:30:16 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/02/12 10:43:49 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>
// int	main(void)
// {
// 	char	*address;
// 	address = "Hello World";
// 	ft_putptr_fd(address, 1);
// 	printf("\n%p", address);
// 	return (1);
// }

#include "../ft_printf.h"

int	ft_putptr_fd(void *p, int fd)
{
	unsigned long	address;
	char			*prefix;
	int				i;

	if (!p)
		return (ft_putstr_fd("(nil)", fd));
	address = (unsigned long)p;
	prefix = "0x";
	i = 0;
	i += ft_putstr_fd(prefix, fd);
	i += ft_puthexl_fd((unsigned long)address, fd);
	return (i);
}
