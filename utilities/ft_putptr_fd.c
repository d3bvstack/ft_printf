/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:30:16 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/02/11 13:22:54 by dbarba-v         ###   ########.fr       */
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

#include "ftprintf.h"

int	ft_putptr_fd(char *p, int fd)
{
	unsigned long	address;
	char			*prefix;
	int				i;

	address = (unsigned long)p;
	prefix = "0x";
	i = 0;
	i += ft_putstr_fd(prefix, fd);
	i += ft_puthexl_fd(address, fd);
	return (i);
}
