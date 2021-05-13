# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hesayah <hesayah@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/15 17:19:07 by hesayah           #+#    #+#              #
#    Updated: 2021/04/05 15:21:42 by hesayah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c \
ft_strlen.c ft_strlcpy.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c \
ft_substr.c ft_tolower.c ft_toupper.c ft_split.c ft_strmapi.c ft_putchar_fd.c \
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c ft_strcpy.c \
ft_add_str_tab.c ft_free_tab.c ft_lstnew_bonus.c ft_lstadd_front_bonus.c \
ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_c_in_str.c \
ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c 

GCC = gcc

FLAGS = -Wall -Wextra -Werror

INCLUDE = libft.h

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(GCC) $(FLAGS) -c $(SRCS) $(INCLUDE)
	@ar -rc $(NAME) $^
	@ranlib $(NAME)
	@echo "\033[32m[Success :D !]"
	
clean:
	@rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
