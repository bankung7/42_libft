/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnilprap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 17:29:40 by vnilprap          #+#    #+#             */
/*   Updated: 2022/03/10 07:46:40 by vnilprap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*n;

	if (!lst || !f || !del)
		return (0);
	n = ft_lstnew((*f)(lst->content));
	if (!n)
		return (0);
	lst = lst->next;
	head = n;
	while (lst)
	{
		n->next = ft_lstnew((*f)(lst->content));
		if (!n)
		{
			ft_lstclear(&head, del);
			return (0);
		}
		n = n->next;
		lst = lst->next;
	}
	n->next = 0;
	return (head);
}
