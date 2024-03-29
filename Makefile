# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nzhuzhle <nzhuzhle@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/26 18:10:18 by nzhuzhle          #+#    #+#              #
#    Updated: 2023/05/16 19:51:32 by nzhuzhle         ###   ########.fr        #
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
	   ft_itoa.c ft_split.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
	   ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
			ft_lstmap.c

INCLUDE = -I ./

OBJ = $(SRCS:.c=.o) 
OBJ_BONUS = $(SRCS_BONUS:.c=.o)	

all: $(NAME)
	
%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

bonus: .bonus
	
.bonus: $(OBJ) $(OBJ_BONUS)
	ar -rcs $(NAME) $(OBJ) $(OBJ_BONUS)
	touch .bonus

clean:
	rm -f $(OBJ) $(OBJ_BONUS) .bonus a.out

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean clean re bonus
