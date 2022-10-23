/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khbouych <khbouych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:32:20 by khbouych          #+#    #+#             */
/*   Updated: 2022/10/23 13:31:45 by khbouych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	nbr_words;

	i = 0;
	nbr_words = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			nbr_words++;
		i++;
	}
	return (nbr_words);
}

static size_t	ft_len_word(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

static void	*ft_clear_leak(char **output, int nbr_words)
{
	int	i;

	i = -1;
	while (++i < nbr_words)
		free(output[i]);
	free(output);
	return (0);
}

static char	**ft_fill_words(char const *s, char c, int nbr_words,
		char **output)
{
	int	i;
	int	j;
	int	len;

	i = -1;
	while (++i < nbr_words)
	{
		while (*s == c)
			s++;
		len = ft_len_word(s, c);
		output[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (!output[i])
			return (ft_clear_leak(output, i));
		j = -1;
		while (++j < len)
			output[i][j] = *s++;
		output[i][j] = '\0';
	}
	output[i] = NULL;
	return (output);
}

char	**ft_split(char const *s, char c)
{
	char	**output;

	if (!s)
		return (0);
	output = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!output)
		return (0);
	output = ft_fill_words(s, c, ft_count_words(s, c), output);
	return (output);
}
