# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: codespace <codespace@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/11 12:56:32 by dbarba-v          #+#    #+#              #
#    Updated: 2025/02/12 08:37:18 by codespace        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SOURCES = ft_printf.c \
utilities/ft_putchar_fd.c \
utilities/ft_puthexu_fd.c \
utilities/ft_putptr_fd.c \
utilities/ft_puthexl_fd.c \
utilities/ft_putnbr_fd.c \
utilities/ft_putuns_fd.c \
utilities/ft_putstr_fd.c \

OBJECTS = $(SOURCES:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

AR = ar

ARFLAGS = -rcs

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJECTS)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all