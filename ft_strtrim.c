/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnilprap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 08:07:25 by vnilprap          #+#    #+#             */
/*   Updated: 2022/03/07 11:52:50 by vnilprap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int	start;
	int	len;
	int	i;

	i = 0;
	start = 0;
	len = ft_strlen((char *)s1);
	if (!s1)
		return (0);
	if (!set)
	{
		ptr = malloc(sizeof(char) * len + 1);
		if (!ptr)
			return (0);
	}
	ptr = 0;
	return (ptr);
}
