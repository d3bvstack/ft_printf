/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:37:31 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/01/21 14:24:19 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t target_memsize)
{
	size_t	source_length;
	size_t	target_length;
	size_t	i;

	target_length = ft_strlen(dst);
	source_length = ft_strlen(src);
	if (target_memsize <= target_length)
		return (target_memsize + source_length);
	i = 0;
	while (src[i] && (target_length + i) < (target_memsize - 1))
	{
		dst[target_length + i] = src[i];
		i++;
	}
	dst[target_length + i] = 0;
	return (target_length + source_length);
}
