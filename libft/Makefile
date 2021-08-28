# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npinheir <npinheir@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/19 23:35:42 by npinheir          #+#    #+#              #
#    Updated: 2021/08/28 23:40:18 by npinheir         ###   ########.fr        #
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

SRC		= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_toupper.c ft_tolower.c ft_strncmp.c ft_memcmp.c ft_atoi.c \
			ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_bzero.c ft_memset.c \
			ft_memcpy.c ft_memmove.c ft_memchr.c ft_calloc.c ft_strchr.c \
			ft_strrchr.c ft_strnstr.c ft_strdup.c ft_putchar_fd.c ft_putstr_fd.c \
			ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c ft_substr.c ft_strjoin.c \
			ft_strtrim.c ft_strmapi.c ft_itoa.c ft_split.c
SRCBONUS = ft_lstadd_front.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
			ft_lstiter.c ft_lstsize.c ft_lstnew.c ft_lstlast.c ft_lstmap.c
OBJ		= $(SRC:.c=.o)
OBJBONUS = $(SRCBONUS:.c=.o)

# Colors

RED = \033[0;31m
GREEN = \033[0;32m
NONE = \033[0m

# Rules

%.o:		%.c
	@$(CC) $(CFLAGS) -c $(SRC) $(SRCBONUS)

all:		$(NAME)
	@echo "\t$(GREEN)✔ Library Ready !$(NONE)"

bonus:		$(OBJ) $(OBJBONUS)
	@ar rcs $(NAME) $(OBJ) $(OBJBONUS)
	@echo "\t$(GREEN)✔ Library Ready !$(NONE)"

$(NAME):	$(OBJ)
	@ar rcs $(NAME) $(OBJ)

clean:
	@$(RM) $(OBJ) $(OBJBONUS)
	@echo "\t$(GREEN)✔ Objects removed !$(NONE)"

fclean:
	@$(RM) $(NAME) $(OBJ) $(OBJBONUS)
	@echo "\t$(GREEN)✔ Directory fully cleaned !$(NONE)"

re:			fclean all

c:			all clean