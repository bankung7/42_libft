/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnilprap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 10:44:54 by vnilprap          #+#    #+#             */
/*   Updated: 2022/03/12 14:22:05 by vnilprap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	**ft_free(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i++]);
	}
	free(ptr);
	return (0);
}

char 	**ft_split(char const *s, char c)
{
	char	**ptr;

	if (!c)
	{
		ptr = malloc(sizeof(char *) * 2);
		if (!ptr)
			return (ft_free(ptr));
		ptr[0] = ft_strdup(s);
		ptr[1] = 0;
		return (ptr);	
	}

	if (!s)
		return (0);
	
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] == c && s[i - 1][)
	}
	return (0);	
}
