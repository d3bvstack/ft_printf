/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:36:26 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/01/23 11:13:04 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last;

	last = NULL;
	while (*str)
	{
		if (*str == (unsigned char)c)
			last = str;
		str++;
	}
	if (*str == '\0')
	{
		if ((unsigned char)c == '\0')
			last = str;
		return ((char *)last);
	}
	return (NULL);
}
