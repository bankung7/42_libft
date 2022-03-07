/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnilprap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 21:33:48 by vnilprap          #+#    #+#             */
/*   Updated: 2022/03/07 12:13:33 by vnilprap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	i;
	char	*ptr;

	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	i = 0;
	if (!s1 && !s2)
		return (0);
	ptr = ft_calloc(sizeof(char), (len1 + len2 + 1));
	if (!ptr)
		return (0);
	while (i < len1)
		ptr[i++] = *s1++;
	while (len2 > 0)
	{
		ptr[i++] = *s2++;
		len2--;
	}
	return (ptr);
}
