# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npinheir <npinheir@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/19 23:35:42 by npinheir          #+#    #+#              #
#    Updated: 2021/08/26 18:06:25 by npinheir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Executable name

NAME	= libft.a

# Compiler and flags

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
DEBUG	= -g -fsanitize=address

RM		= rm -rf

# Sources and object files

SRC		= $(wildcard *.c) 
OBJ		= $(SRC:.c=.o)

# Colors

RED = \033[0;31m
GREEN = \033[0;32m
NONE = \033[0m

# Rules

%.o:		%.c
	@$(CC) $(CFLAGS) -c $(SRC)

all:		$(NAME)
	@echo "\t$(GREEN)✔ Library Ready !$(NONE)"

$(NAME):	$(OBJ)
	@ar rcs $(NAME) $(OBJ)

clean:
	@$(RM) $(OBJ)
	@echo "\t$(GREEN)✔ Objects removed !$(NONE)"

fclean:
	@$(RM) $(NAME) $(OBJ)
	@echo "\t$(GREEN)✔ Directory fully cleaned !$(NONE)"

re:			fclean all

c:			all clean