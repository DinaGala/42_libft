# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nzhuzhle <nzhuzhle@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/26 18:10:18 by nzhuzhle          #+#    #+#              #
#    Updated: 2023/05/03 21:02:09 by nzhuzhle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = libft.h
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_toupper \ 
ft_tolower ft_strchr ft_strrchr ft_strnstr ft_memset ft_bzero ft_memcpy \
	ft_memchr 
 
INCLUDE = -I ./

OBJ = $(SRCS:.c=.o) 	

all: $(NAME)
	
%.o: %.c $(HEADER) 
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME):: $(OBJ)
	ar -rcs $(NAME) $(OBJ)

fclean: clean
	rm -f $(NAME)

clean:
	rm -f srcs/*.o 

re: 
	fclean all

.PHONY: all fclean clean re

