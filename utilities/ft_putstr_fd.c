/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:26:17 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/12/05 23:56:25 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd)
{
	char	*ptr;
	int		i;

	if (!s)
		return (ft_putstr_fd("(null)", fd));
	ptr = s;
	i = 0;
	while (*ptr != '\0')
	{
		write(fd, ptr, 1);
		ptr++;
		i++;
	}
	return (i);
}
