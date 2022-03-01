# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vnilprap <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 18:18:35 by vnilprap          #+#    #+#              #
#    Updated: 2022/03/01 21:04:06 by vnilprap         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ${wildcard ft*.c}

INCLDS = libft.h

CC = gcc

CFLAGS = -Wall -Wextra -Werror

OBJS = ${SRCS:.c=.o}

RM = rm -f

all: ${NAME} clean

${NAME}: .c.o
	ar rcs ${NAME} ${OBJS}

.c.o: ${OBJS}
	${CC} ${CFLAGS} ${SRCS} -c

comply:
	${CC} ${CFLAGS} main.c ${NAME} -o test

t: comply
	./test

clean:
	${RM} ${wildcard ft*.o}

fclean: clean
	${RM} ${NAME} test

re: fclean all

.PHONY: all clean fclean comply ${NAME} t
