/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khbouych <khbouych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:44:06 by khbouych          #+#    #+#             */
/*   Updated: 2022/10/23 18:11:51 by khbouych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lendst;
	size_t	lensrc;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	i = -1;
	if (!size)
		return (lensrc);
	if (lendst > size)
		lensrc += size;
	else
		lensrc += lendst;
	while (src[++i] != '\0' && lendst < size - 1)
		dst[lendst++] = src[i];
	dst[lendst] = '\0';
	return (lensrc);
}
