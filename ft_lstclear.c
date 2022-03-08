/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnilprap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:11:07 by vnilprap          #+#    #+#             */
/*   Updated: 2022/03/07 21:51:19 by vnilprap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*n;

	if (*lst == 0)
		return ((void)0);
	while (*lst)
	{
		n = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = n;
	}	
}
