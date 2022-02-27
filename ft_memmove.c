/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnilprap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 10:06:55 by vnilprap          #+#    #+#             */
/*   Updated: 2022/02/27 10:49:42 by vnilprap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	void	*buf;

	i = 0;
	buf = 0;
	while (i < len)
	{
		*(char *)(buf + i) = *(char *)(src + i);
		i++;
	}
	dst = buf;
	return (dst);
}
