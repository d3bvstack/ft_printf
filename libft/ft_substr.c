/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:01:43 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/01/28 12:13:37 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *source, unsigned int start, size_t len)
{
	size_t	source_len;
	char	*substring;

	if (!source)
		return (NULL);
	source_len = ft_strlen(source);
	if (start >= source_len)
		return (ft_strdup(""));
	if (len > source_len - start)
		len = source_len - start;
	substring = malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (NULL);
	ft_strlcpy(substring, source + start, len + 1);
	return (substring);
}
