/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnilprap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 08:07:25 by vnilprap          #+#    #+#             */
/*   Updated: 2022/03/09 16:46:23 by vnilprap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_issetchar(char const *s, char const *set)
{
	int	i;
	int	out;

	i = 0;
	out = 0;
	while (s[i])
	{
		if (ft_strchr(set, s[i++]))
			out++;
		else
			return (out);
	}
	return (out);
}

int	ft_issetcharr(char const *s, char const *set)
{
	int	len;

	len = ft_strlen((char *)s) - 1;
	while (len > 0)
	{
		if (ft_strchr(set, s[len]))
			len--;
		else
			return (len);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		i;
	char	*ptr;

	i = 0;
	len = ft_issetcharr(s1, set) - ft_issetchar(s1, set) + 1;
	if (!s1 || !set || len <= 0)
	{
		ptr = (char *)malloc(sizeof(char));
		if (!ptr)
			return (0);
		ptr = 0;
		return (ptr);
	}
	ptr = malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (0);
	while (i < len)
	{
		ptr[i] = s1[ft_issetchar(s1, set) + i];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
