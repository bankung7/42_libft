/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnilprap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 15:16:05 by vnilprap          #+#    #+#             */
/*   Updated: 2022/02/27 22:44:50 by vnilprap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	if (ft_strncmp(needle, "", 1) == 0)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[j])
		{
			if (haystack[i + 1] == 0 || i == len - 1i || needle[j + 1] == 0)
				return ((char *)(haystack) + (i - j));
			j++;
		}
		else
		{
			i = i - j;
			j = 0;
		}
		i++;
	}
	return (0);
}
