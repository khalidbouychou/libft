/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khbouych <khbouych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:42:23 by khbouych          #+#    #+#             */
/*   Updated: 2022/10/16 12:32:58 by khbouych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*_s1;
	unsigned char	*_s2;

	_s1 = (unsigned char *)s1;
	_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n && _s1[i] == _s2[i])
		i++;
	if (i == n)
		return (0);
	return (_s1[i] - _s2[i]);
}
