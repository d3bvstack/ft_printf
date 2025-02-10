/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:14:09 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/01/22 11:22:34 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	source_len;

	source_len = ft_strlen(src);
	if (dstsize != 0)
	{
		while (dstsize-- > 1 && *src != 0)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (source_len);
}
