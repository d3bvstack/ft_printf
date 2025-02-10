/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 19:18:32 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/01/28 15:52:59 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_word(char const *input, char c);
static size_t	ft_word_length(char const *input, char c);
static char		**ft_str_split(char **arr, char const *input, char c);
static char		**ft_append_array(char **arr, char const *input, char c,
					int pos);

static size_t	ft_count_word(char const *input, char c)
{
	size_t	word_count;
	int		in_word;

	word_count = 0;
	in_word = 0;
	while (*input)
	{
		if (*input != c && !in_word)
		{
			word_count++;
			in_word = 1;
		}
		else if (*input == c)
			in_word = 0;
		input++;
	}
	return (word_count);
}

static size_t	ft_word_length(char const *input, char c)
{
	char	*delim;

	delim = ft_strchr(input, c);
	if (!delim)
		return (ft_strlen(input));
	return (delim - input);
}

static char	**ft_str_split(char **arr, char const *input, char c)
{
	int	pos;

	pos = 0;
	while (*input)
	{
		while (*input == c && *input)
			input++;
		if (*input)
		{
			arr = ft_append_array(arr, input, c, pos);
			if (!arr)
				return (NULL);
			pos++;
			while (*input && *input != c)
				input++;
		}
	}
	arr[pos] = NULL;
	return (arr);
}

static char	**ft_append_array(char **arr, char const *input, char c, int pos)
{
	size_t	length;

	length = ft_word_length(input, c);
	arr[pos] = ft_substr(input, 0, length);
	if (!arr[pos])
	{
		while (pos >= 0)
		{
			free(arr[pos]);
			pos--;
		}
		free(arr);
		return (NULL);
	}
	pos++;
	input += length;
	return (arr);
}

char	**ft_split(char const *input, char c)
{
	char	**arr;

	if (!input)
		return (NULL);
	arr = (char **)malloc((ft_count_word(input, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	return (ft_str_split(arr, input, c));
}
