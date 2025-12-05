/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:30:16 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/12/05 23:56:25 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
