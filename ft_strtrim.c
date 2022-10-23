/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khbouych <khbouych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:59:12 by khbouych          #+#    #+#             */
/*   Updated: 2022/10/21 12:33:05 by khbouych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static int	is_there_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	i;
	size_t	begin;
	size_t	end;

	if (!s1)
		return (0);
	if (!set)
		return ((char *)s1);
	i = 0;
	begin = 0;
	res = 0;
	end = ft_strlen(s1);
	while (s1[begin] && is_there_set(s1[begin], set))
		begin++;
	while (end > begin && is_there_set(s1[end - 1], set))
		end--;
	res = (char *)malloc(sizeof(char) * (end - begin) + 1);
	if (res == 0)
		return (0);
	while (begin <= end)
		res[i++] = s1[begin++];
	res[i] = '\0';
	return (res);
}*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, *(s1 + i)))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
