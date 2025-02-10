/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 11:20:56 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/01/24 10:07:19 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_int_length(int n)
{
	int	lenght;
	int	min_int;

	lenght = 0;
	min_int = -2147483648;
	if (n == min_int)
	{
		lenght = 11;
		return (lenght);
	}
	if (n < 0)
	{
		lenght++;
		n = n * (-1);
	}
	while (n > 9)
	{
		n /= 10;
		lenght++;
	}
	lenght++;
	return (lenght);
}

static int	ft_isnegative(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		i;
	int		isnegative;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	result = malloc(sizeof(char) * (ft_int_length(n) + 1));
	if (!result)
		return (NULL);
	isnegative = ft_isnegative(n);
	if (isnegative)
		n *= -1;
	i = ft_int_length(n) + isnegative;
	result[i] = '\0';
	i--;
	while (n > 9)
	{
		result[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	result[i] = n + '0';
	if (isnegative)
		result[0] = '-';
	return (result);
}
