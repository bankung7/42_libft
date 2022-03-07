/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnilprap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 08:07:25 by vnilprap          #+#    #+#             */
/*   Updated: 2022/03/07 11:13:01 by vnilprap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;

	if (!s1)
		return (0);
	if (!set)
	{
		ptr = malloc(sizeof(char) * ft_strlen((char *)s1) + 1);
		ft_strlcpy(ptr, s1, ft_strlen((char *)s1));
		return (ptr);
	}
}
