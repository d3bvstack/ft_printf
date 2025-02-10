/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 16:45:14 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/01/27 09:36:47 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*source_memory;
	unsigned char		*target_memory;

	if (dest == 0 && src == 0)
		return (dest);
	source_memory = (unsigned char *)src;
	target_memory = (unsigned char *)dest;
	while (n--)
		*target_memory++ = *source_memory++;
	return (dest);
}
