/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 17:04:23 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/01/27 09:37:08 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*source_memory;
	unsigned char	*target_memory;

	if (dest == 0 && src == 0)
		return (dest);
	source_memory = (unsigned char *)src;
	target_memory = (unsigned char *)dest;
	if (src <= dest)
	{
		source_memory += n - 1;
		target_memory += n - 1;
		while (n--)
			*target_memory-- = *source_memory--;
	}
	else
	{
		while (n--)
			*target_memory++ = *source_memory++;
	}
	return (dest);
}
