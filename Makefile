# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ljalikak <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/04 13:04:11 by ljalikak          #+#    #+#              #
#    Updated: 2019/04/04 13:04:14 by ljalikak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
NAME = libft.a
SRC = ft_atoi.c \
ft_bzero.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_memcmp.c \
ft_memccpy.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_strcat.c \
ft_strchr.c \
ft_strcmp.c \
ft_strcpy.c \
ft_strdup.c \
ft_strlcat.c \
ft_strlen.c \
ft_strncat.c \
ft_strncmp.c \
ft_strncpy.c \
ft_strrchr.c \
ft_strstr.c \
ft_tolower.c \
ft_toupper.c \
ft_strnstr.c \
ft_memchr.c \
ft_memalloc.c \
ft_memdel.c \
ft_strnew.c \
ft_strdel.c \
ft_strclr.c \
ft_striter.c \
ft_striteri.c \
ft_strmap.c \
ft_strmapi.c \
ft_strequ.c \
ft_strnequ.c \
ft_strsub.c \
ft_strjoin.c \
ft_strtrim.c \
ft_strsplit.c \
ft_itoa.c \
ft_putchar.c \
ft_putchar_fd.c \
ft_putstr.c \
ft_putendl.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_putnbr.c \
ft_lstnew.c \
ft_lstdelone.c \
ft_lstdel.c \
ft_lstadd.c \
ft_lstiter.c \
ft_lstmap.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(SRC)
	@ar rc $(NAME) $(OBJ)

.c.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
