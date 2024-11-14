# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oostapen <oostapen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/12 18:36:18 by oostapen          #+#    #+#              #
#    Updated: 2024/11/12 18:36:24 by oostapen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#gcc main.c -L minilibx-linux -lmlx -lX11 -lXext
#gcc main.c -L minilibx-linux -lmlx -lX11 -lXext -g -L libft -lft -lm

NAME = so_long
SRCS = so_long.c move.c render.c bulid_map.c validate_c.c exit.c helpers.c
OBJS = $(SRCS:.c=.o)
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
MLX_DIR = minilibx-linux
MLX = $(MLX_DIR)/libmlx.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I $(MLX_DIR)
LDFLAGS = -L $(MLX_DIR) -lmlx -L /usr/X11/lib -lXext -lX11 -lm

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT) $(MLX)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(LIBFT) $(LDFLAGS)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(MLX):
	make -C $(MLX_DIR)

clean:
	rm -f $(OBJS)
	make clean -C $(LIBFT_DIR)
	make clean -C $(MLX_DIR)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT_DIR)

re: fclean all
