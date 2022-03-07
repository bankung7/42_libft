/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnilprap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 08:07:25 by vnilprap          #+#    #+#             */
/*   Updated: 2022/03/07 11:14:31 by vnilprap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*ptr;

	i = 0;
	len = ft_strlen((char *)s1) - 1;
	while (s1[i] && ft_strchr(set, s1[i]) != 0)
		i++;
	while (len > 0 && ft_strchr(set, s1[len]) != 0)
		len--;
	if (i > len || s1[0] == 0)
	{
		ptr = malloc(sizeof(char) * 1);
		if (!ptr)
			return (0);
		ptr[0] = 0;
		return (ptr);
	}
	ptr = malloc(sizeof(char) * (len - i + 2));
	if (!ptr)
		return (0);
	ptr = ft_substr(s1, i, len - i + 1);
	return (ptr);
}
