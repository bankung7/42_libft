/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnilprap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:14:54 by vnilprap          #+#    #+#             */
/*   Updated: 2022/03/01 07:52:43 by vnilprap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	val;
	int	i;
	int	m;

	val = 0;
	i = 0;
	m = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			m = -1;
		i++;
	}
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
			return (val * m);
		val = val * 10 + str[i++] - '0';
	}
	return (val * m);
}