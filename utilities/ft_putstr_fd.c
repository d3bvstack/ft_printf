/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:26:17 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/02/11 16:25:57 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>
// int	main(void)
// {
// 	char *str = "Hello World";
// 	printf("%s\n", str);
// 	ft_putstr_fd(str, 1);
// }

#include "../ft_printf.h"

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
