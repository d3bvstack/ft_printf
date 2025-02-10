/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 15:18:07 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/01/27 09:24:15 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_issign(unsigned char *c)
{
	if (*c == 43 || *c == 45)
		return (1);
	return (0);
}

static int	ft_iswhitespace(unsigned char *c)
{
	if (*c == 32 || (*c >= 9 && *c <= 13))
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	unsigned char	*ptr;
	int				sign;
	int				result;

	ptr = (unsigned char *)nptr;
	sign = 1;
	result = 0;
	while (ft_iswhitespace(ptr))
		ptr++;
	if (ft_issign(ptr))
	{
		if (*ptr == 45)
			sign *= -1;
		ptr++;
	}
	while (ft_isdigit(*ptr))
	{
		result *= 10;
		result += (*ptr - '0');
		ptr++;
	}
	return (result * sign);
}
