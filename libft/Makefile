# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thibnguy <thibnguy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 16:24:31 by thibnguy          #+#    #+#              #
#    Updated: 2022/11/16 10:40:41 by thibnguy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
HEADER = -I ./includes
OBJS = ${SRCS:.c=.o}
SRCS = ${wildcard *.c}

#ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_strlcpy.c \
	ft_memmove.c \

libft.a : ${OBJS}
	ar -rcs libft.a ${OBJS}

all : libft.a

.c.o:
	${CC} ${CFLAGS} ${HEADER} -c $< -o ${<:.c=.o}

clean :
	rm -f ${OBJS}

fclean: clean
	rm -f libft.a

re: fclean all