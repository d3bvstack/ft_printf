# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/20 15:14:57 by dbarba-v          #+#    #+#              #
#    Updated: 2025/01/30 09:18:22 by dbarba-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = ft_putchar_fd.c \
ft_itoa.c \
ft_memcpy.c \
ft_strchr.c \
ft_split.c \
ft_toupper.c \
ft_strlcat.c \
ft_calloc.c \
ft_putend_fd.c \
ft_strmapi.c \
ft_isascii.c \
ft_strdup.c \
ft_atoi.c \
ft_isprint.c \
ft_substr.c \
ft_strnstr.c \
ft_strlen.c \
ft_striteri.c \
ft_strrchr.c \
ft_strncmp.c \
ft_bzero.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isdigit.c \
ft_memmove.c \
ft_strtrim.c \
ft_strjoin.c \
ft_memset.c \
ft_strlcpy.c \
ft_memchr.c \
ft_putnbr_fd.c \
ft_memcmp.c \
ft_tolower.c \
ft_putstr_fd.c \

SOURCESBONUS = ft_lstadd_back.c \
ft_lstadd_front.c \
ft_lstadd_back.c \
ft_lstadd_front.c \
ft_lstclear.c \
ft_lstdelone.c \
ft_lstiter.c \
ft_lstlast.c \
ft_lstmap.c \
ft_lstnew.c \
ft_lstsize.c \

OBJECTS = $(SOURCES:.c=.o)
OBJECTSBONUS = $(SOURCESBONUS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

AR = ar

ARFLAGS = -rcs

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJECTS)

bonus: $(OBJECTSBONUS) $(OBJECTS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJECTSBONUS) $(OBJECTS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@
	
.PHONY: all clean fclean re

clean: 
	rm -f $(OBJECTS) $(OBJECTSBONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all