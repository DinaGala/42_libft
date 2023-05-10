# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nzhuzhle <nzhuzhle@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/26 18:10:18 by nzhuzhle          #+#    #+#              #
#    Updated: 2023/05/09 17:30:32 by nzhuzhle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = libft.h
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	   ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strnstr.c \
	   ft_memset.c ft_bzero.c ft_memcpy.c ft_memchr.c ft_memcmp.c ft_calloc.c \
	   ft_strlen.c ft_strlcpy.c ft_strdup.c ft_strncmp.c ft_strlcat.c \
	   ft_memmove.c ft_atoi.c ft_substr.c ft_strjoin.c ft_strtrim.c \
	   ft_itoa.c

INCLUDE = -I ./

OBJ = $(SRCS:.c=.o) 	

all: $(NAME)
	
%.o: %.c $(HEADER) 
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

fclean: clean
	rm -f $(NAME)

clean:
	rm -f *.o 

re: 
	fclean all

.PHONY: all fclean clean re

