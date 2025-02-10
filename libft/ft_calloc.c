/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 15:57:08 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/01/27 09:32:21 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*buffer;
	size_t	total_size;

	if (size && nmemb > ~(size_t)0 / size)
		return (NULL);
	total_size = nmemb * size;
	buffer = malloc(total_size);
	if (!buffer)
		return (NULL);
	ft_bzero(buffer, total_size);
	return (buffer);
}
