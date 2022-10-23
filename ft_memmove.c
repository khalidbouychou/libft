/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khbouych <khbouych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:34:43 by khbouych          #+#    #+#             */
/*   Updated: 2022/10/22 14:18:56 by khbouych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*str;
	unsigned char	*tmp;
	size_t			i;

	i = -1;
	tmp = dest;
	str = (unsigned char *)src;
	if (!dest && !src)
		return (0);
	if (dest < src)
		while (++i < len)
			tmp[i] = str[i];
	else
		while (++i < len)
			tmp[len - i - 1] = str[len - i - 1];
	return (dest);
}
