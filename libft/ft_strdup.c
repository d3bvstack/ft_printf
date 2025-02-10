/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:44:53 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/01/21 13:30:31 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*target;
	char	*src;
	size_t	size;

	target = (char *)malloc(ft_strlen(s) + 1);
	if (!target)
		return (NULL);
	src = (char *)s;
	size = (ft_strlen(src) + 1);
	ft_strlcpy(target, src, size);
	return (target);
}
