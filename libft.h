/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnilprap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:16:23 by vnilprap          #+#    #+#             */
/*   Updated: 2022/02/18 11:47:03 by vnilprap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_strlen(char *c);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_bzero(void *s, size_t n);

#endif
