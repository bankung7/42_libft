# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vnilprap <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 18:18:35 by vnilprap          #+#    #+#              #
#    Updated: 2022/02/17 19:40:29 by vnilprap         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ${wildcard ft*.c}

INCLDS = libft.h

CC = gcc

CFLAGS = -Wall -Wextra -Werror

OBJS = ${SRCS:.c=.o}

RM = rm -f

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: ${NAME}
	${CC} ${CFLAGS} main.c ${NAME} -o test

clean: all
	${RM} ${wildcard ft*.o}

fclean: clean
	${RM} ${NAME}

re: fclean all

test:
	./test

