/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnilprap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 10:44:54 by vnilprap          #+#    #+#             */
/*   Updated: 2022/03/06 10:42:16 by vnilprap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	ft_cstsplit(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c && i != 0)
			len++;
		else if (s[i] != c && s[i + 1] == 0)
			len++;
		i++;
	}
	return (len);
}

char	**ft_free(char **str, int n)
{
	int	i;

	i = 0;
	while (i <= n)
		free(str[i++]);
	free(str);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		index;
	int		i;
	char	**ptr;
	size_t	len;

	i = 0;
	index = 0;
	len = 0;
	ptr = ft_calloc(sizeof(char *), ft_cstsplit(s, c) + 1);
	if (!ptr)
		return (0);
	while (s[i])
	{
		if (s[i] != c && s[i + 1] == 0)
		{
			if ((ptr[index++] = ft_substr(s, len, i - len + 1)) == 0)
				return (ft_free(ptr, ft_cstsplit(s, c)));
		}
		else if (s[i] == c && s[i - 1] != c && i != 0)
		{
			if ((ptr[index++] = ft_substr(s, len, i - len)) == 0)
				return (ft_free(ptr, ft_cstsplit(s , c)));
		}
		if (s[i] == c)
			len = i + 1;
		i++;
	}
	return (ptr);
}
