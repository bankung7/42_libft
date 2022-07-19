# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vnilprap <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 18:18:35 by vnilprap          #+#    #+#              #
#    Updated: 2022/07/19 12:52:36 by vnilprap         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
       ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
       ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
       ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
       ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
       ft_strtrim.c ft_split.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c \
       ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c ft_strmapi.c

SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	     ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
	     ft_lstmap.c

CC = gcc

CFLAGS = -Wall -Wextra -Werror

O_DIR = obj/

OBJS = $(SRCS:%.c=$(O_DIR)%.o)

OBJS_BONUS = $(SRCS_BONUS:%.c=$(O_DIR)%.o)

RM = rm -rf

all: $(NAME)

$(O_DIR)%.o: %.c
	mkdir -p $(O_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS) $(OBJS_BONUS)

comply:
	$(CC) $(CFLAGS) main.c $(NAME) -o test

t: comply
	$(RM) main.o 
	./test

clean:
	$(RM) $(OBJS) $(OBJS_BONUS) $(O_DIR)

fclean: clean
	$(RM) $(NAME) test

re: fclean all

.PHONY: all clean fclean comply t
