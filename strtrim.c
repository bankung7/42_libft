/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnilprap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 08:07:25 by vnilprap          #+#    #+#             */
/*   Updated: 2022/03/04 10:06:34 by vnilprap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	char	*ptr;

	i = 0;
	len = 0;
	while (s1[i])
	{
		if (ft_strchr(set, (char)s1[i]) != 0)
			len++;
		i++;
	}
	ptr = malloc(sizeof(char) * (ft_strlen((char *)s1) - len + 1));
	if (!ptr)
		return (0);
	i = 0;
	len = 0;
	while (s1[i])
	{
		if (ft_strchr(set, (char)s1[i]) == 0)
			ptr[len++] = (char)s1[i];
		i++;
	}
	ptr[len] = 0;
	return (ptr);
}
