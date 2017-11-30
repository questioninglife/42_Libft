# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 00:53:35 by edchung           #+#    #+#              #
#    Updated: 2017/11/29 20:39:43 by edchung          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRC =	ft_abs.c ft_atoi.c ft_bzero.c ft_intlen.c \
		ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_islower.c \
		ft_isspace.c ft_isupper.c ft_iscntrl.c ft_isgraph.c ft_isprint.c \
		ft_ispunct.c ft_itoa.c ft_lstadd.c ft_lstdel.c ft_lstdelone.c \
		ft_lstiter.c ft_lstmap.c ft_lstnew.c ft_memalloc.c ft_memccpy.c \
		ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c \
		ft_memset.c ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c \
		ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c ft_strcat.c \
		ft_strchr.c ft_strcmp.c ft_strcpy.c ft_strdup.c ft_strequ.c \
		ft_strlcat.c ft_strlen.c ft_strrchr.c ft_strstr.c ft_strclr.c \
		ft_strdel.c ft_striter.c ft_striteri.c ft_strjoin.c ft_strmap.c \
		ft_strmapi.c ft_strnew.c ft_strrev.c ft_strsplit.c ft_strsub.c \
		ft_strtrim.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c \
		ft_strnstr.c ft_tolower.c ft_toupper.c \

OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME):
		gcc $(CFLAGS) -c $(SRC)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all
