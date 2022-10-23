/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khbouych <khbouych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:11:21 by khbouych          #+#    #+#             */
/*   Updated: 2022/10/22 20:59:43 by khbouych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	main(void)
{
	t_list	*node1;
	t_list	*new;
	t_list	*res;

	node1 = ft_lstnew("hey 1");
	new = ft_lstnew("hey ");
	ft_lstadd_back(&node1, new);
	res = ft_lstlast(node1);
	printf("content -> %s", res);
}
