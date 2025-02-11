/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:26:17 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/02/11 13:22:58 by dbarba-v         ###   ########.fr       */
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

#include "ftprintf.h"

static int	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

int	ft_putstr_fd(char *s, int fd)
{
	char	*ptr;

	ptr = s;
	while (*ptr != '\0')
	{
		write(fd, ptr, 1);
		ptr++;
	}
	return (ft_strlen(s));
}
