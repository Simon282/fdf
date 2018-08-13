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

.PHONY: all, $(NAME), clean, fclean, re

NAME = fdf

NOC=\033[0m
OKC=\033[32m
ERC=\033[31m
WAC=\033[33m

cc = gcc
C_FLAGS = -Wall -Wextra -Werror -g
FRAM = -L minilibx_macos -I minilibx_maco -lmlx -framework OpenGL -framework Appkit -g
# FRAM = -framework OpenGL -framework Appkit minilibx_macos/libmlx.a

OBJ_PATH = ./obj/
LFT_PATH = ./libft/
INC_PATH = ./includes/
SRC_PATH = ./srcs/

OBJ_NAME = $(SRC_NAME:.c=.o)
INC_NAME = fdf.h
SRC_NAME = main.c functions.c reader.c drawer.c

SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))
INC = $(addprefix -I,$(INC_PATH))

all: $(NAME)

$(NAME): $(OBJ)
	@echo
	@make -C $(LFT_PATH)
	@$(CC) -o $(NAME) $(FRAM) -L $(LFT_PATH) -lft $^ -o $@
	@echo "$(OKC)FDF:\t\tFDF READY$(NOC)"
	@echo "-----> ಠ_ಠ"

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p $(OBJ_PATH) 2> /dev/null || true
	@$(CC) $(C_FLAGS) $(INC) -o $@ -c $<
	@echo -n =
	
clean:
	@make -C $(LFT_PATH) clean
	@rm -rf $(OBJ_PATH)
	@echo "$(WAC)FDF:\t\tRemoving OBJ path ./obj/$(NOC)"

fclean:
	@make -C $(LBT_PATH) clean
	@rm -f $(NAME)
	@echo "$(WAC)FDF:\t\tRemoving fdf executables$(NOC)"

re: fclean all

