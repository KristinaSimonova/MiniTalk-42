# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksimonov <ksimonov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/02 16:06:06 by ksimonov          #+#    #+#              #
#    Updated: 2023/02/19 16:56:22 by ksimonov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRCS = ft_strlen.c \
	ft_memmove.c \
	ft_memcpy.c \
	ft_bzero.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strrchr.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_strchr.c \
	ft_memset.c \
	ft_isprint.c \
	ft_isdigit.c \
	ft_isascii.c \
	ft_isalpha.c \
	ft_isalnum.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_split.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_strmapi.c \
	ft_itoa.c \
	ft_strtrim.c \
	ft_striteri.c \

OBJ = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	@ar -rc $(NAME) $(OBJ)

clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all
