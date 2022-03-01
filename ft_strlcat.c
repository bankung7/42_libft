/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnilprap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 07:56:59 by vnilprap          #+#    #+#             */
/*   Updated: 2022/03/01 08:32:36 by vnilprap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int	len;

	i = 0;
	len = ft_strlen(dst);
	while (dst[len] && src[i] && i < dstsize)
	{
		dst[len++] = src[i++];
	}
	dst[len] = '\0';
	return (len + dstsize - 1);
}
