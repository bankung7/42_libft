/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnilprap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:25:42 by vnilprap          #+#    #+#             */
/*   Updated: 2022/03/06 09:19:54 by vnilprap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;

	if (!(*s))
		return (0);
	if (start > ft_strlen((char *)s))
		return (ft_strdup(""));
	if (len + start > ft_strlen((char *)s))
		len = ft_strlen((char *)s) - start;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (0);
	i = 0;
	while (i < len)
	{
		ptr[i] = *(s + ((size_t)start + i));
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
