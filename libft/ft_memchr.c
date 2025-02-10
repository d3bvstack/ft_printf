/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 11:23:11 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/01/27 09:35:55 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr_s;
	unsigned char	search_char;

	ptr_s = (unsigned char *)s;
	search_char = (unsigned char)c;
	while (n--)
	{
		if (*ptr_s == search_char)
			return ((void *)ptr_s);
		ptr_s++;
	}
	return (NULL);
}
