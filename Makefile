# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksimonov <ksimonov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/27 18:09:31 by ksimonov          #+#    #+#              #
#    Updated: 2023/07/04 14:46:27 by ksimonov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	minitalk

SERVER_SRC		=	server.c

CLIENT_SRC		=	client.c

SERVER_OBJS		=	$(SERVER_SRC:.c=.o)

CLIENT_OBJS		=	$(CLIENT_SRC:.c=.o)

OBJS			=	$(CLIENT_OBJS) $(SERVER_OBJS)

LIBFT			=	libft/libft.a

PRINTF			=	ft_printf/libftprintf.a

CC				=	gcc

CFLAGS			=	-Wall -Wextra -Werror

RM				=	rm -rf

all: $(NAME)

$(NAME): server client

server: $(SERVER_OBJS)
	make -C ./libft
	make -C ./ft_printf
	@$(CC) $(CFLAGS) $(LIBFT) $(PRINTF) $(SERVER_OBJS) -o server

client: $(CLIENT_OBJS)
	@$(CC) $(CFLAGS) $(LIBFT) $(PRINTF) $(CLIENT_OBJS) -o client

clean:
	@$(RM) $(OBJS)
	@ make -C libft clean
	@ make -C ft_printf clean

fclean: clean
	@$(RM) server client
	@ make -C libft fclean
	@ make -C ft_printf fclean

re:	fclean all