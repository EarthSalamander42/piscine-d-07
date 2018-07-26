/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaguire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 11:58:37 by jmaguire          #+#    #+#             */
/*   Updated: 2018/07/25 13:40:17 by jmaguire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#define IS_WHITESPACE(c) (c == '\t' || c == '\n' || c == ' ')

int		ft_count_words(const char *arg)
{
	int		words;
	int		in_word;

	words = 0;
	in_word = 0;
	while (*arg)
	{
		if (IS_WHITESPACE(*arg))
			in_word = 0;
		else if (!in_word)
		{
			words++;
			in_word = 1;
		}
		arg++;
	}
	return (words);
}

char	**ft_table_generator(char *str, char **out, int words)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (*str && IS_WHITESPACE(*str))
		str++;
	while (i < words)
	{
		j = 0;
		while (str[j] && !IS_WHITESPACE(str[j]))
			j++;
		out[i] = malloc(sizeof(char *) * (j + 1));
		j = 0;
		while (*str && !IS_WHITESPACE(*str))
			out[i][j++] = *(str++);
		out[i][j] = '\0';
		while (*str && IS_WHITESPACE(*str))
			str++;
		i++;
	}
	out[i] = 0;
	return (out);
}

char	**ft_split_whitespaces(char *str)
{
	int		words;
	char	**out;

	words = ft_count_words(str);
	out = malloc(sizeof(char *) * (words + 1));
	if (out == NULL)
		return (NULL);
	return (ft_table_generator(str, out, words));
}
