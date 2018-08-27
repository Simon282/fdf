# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfleisc <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/31 15:26:36 by sfleisc           #+#    #+#              #
#    Updated: 2018/07/31 15:26:39 by sfleisc          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

cc = gcc
C_FLAGS = -Wall -Wextra -Werror -g
FRAM = -L minilibx_macos -I minilibx_maco -lmlx -framework OpenGL -framework Appkit -g
# FRAM = -framework OpenGL -framework Appkit minilibx_macos/libmlx.a

OBJ_PATH = ./objects/
LFT_PATH = ./libft/
INC_PATH = ./includes/
SRC_PATH = ./sources/

OBJ_NAME = $(SRC_NAME:.c=.o)
INC_NAME = fdf.h
SRC_NAME = main.c draw.c line_drawer.c multi_lines.c tab_alloc.c \
	   handle_tab.c nmbr_line.c value.c key_exit.c interpreter.c mlx.c scale_place.c

SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))
INC = $(addprefix -I,$(INC_PATH))

all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(LFT_PATH)
	@$(CC) -o $(NAME) $(FRAM) -L $(LFT_PATH) -lft $^ -o $@

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p $(OBJ_PATH)
	@$(CC) $(C_FLAGS) $(INC) -o $@ -c $<

clean:
	@make -C $(LFT_PATH) clean
	@rm -rf $(OBJ_PATH)

fclean: clean
	@make -C $(LBT_PATH) clean
	@rm -fr $(NAME)

re: fclean all
