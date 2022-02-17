# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vnilprap <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 18:18:35 by vnilprap          #+#    #+#              #
#    Updated: 2022/02/17 20:43:21 by vnilprap         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ${wildcard ft*.c}

INCLDS = libft.h

CC = gcc

CFLAGS = -Wall -Wextra -Werror

OBJS = ${SRCS:.c=.o}

RM = rm -f

all: ${NAME}

${NAME}: .c.o
	ar rcs ${NAME} ${OBJS}

.c.o: ${OBJS}
	${CC} ${CFLAGS} ${SRCS} -c

comply:
	${CC} ${CFLAGS} main.c ${NAME} -o test

test:
	./test

clean:
	${RM} ${wildcard ft*.o}

fclean: clean
	${RM} ${NAME} test

re: fclean all

.PHONY: all clean fclean comply ${NAME} test
