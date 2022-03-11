/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnilprap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 21:33:48 by vnilprap          #+#    #+#             */
/*   Updated: 2022/03/11 13:40:18 by vnilprap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*ptr;

	if (!s1 && !s2)
	{
		ptr = ft_calloc(sizeof(char), 1);
		if (!ptr)
			return (0);
		return (ptr);
	}
	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	ptr = ft_calloc(sizeof(char), len1 + len2 + 1);
	if (!ptr)
		return (0);
	if (!s1 || len1 > 0)
		ft_strlcpy(ptr, s1, len1 + 1);
	if (!s2 || len2 > 0)
		ft_strlcat(ptr, s2, len1 + len2 + 1);
	return (ptr);
}
