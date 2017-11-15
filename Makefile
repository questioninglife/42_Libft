# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edchung <edchung@student.42.us.org>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 00:53:35 by edchung           #+#    #+#              #
#    Updated: 2017/11/14 22:38:09 by edchung          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRC =	ft_atoi.c \
		ft_bzero.c \
		ft_intlen.c \
		ft_is{alnum,alpha,ascii,digit,lower,space,upper}.c \
		ft_is{cntrl,graph,print,punct}.c \
		ft_itoa.c \
		ft_lst{add,del,delone,iter,map,new}.c \
		ft_mem{alloc,ccpy,chr,cmp,cpy,del,move,set}.c \
		ft_put{char,char_fd,endl,endl_fd,nbr,nbr_fd,str,str_fd}.c \
		ft_str{cat,chr,cmp,cpy,dup,equ,lcat,len,rchr,str}.c \
		ft_str{clr,del,iter,iteri,join,map,mapi,new,rev,split,sub,trim}.c \
		ft_strn{cat,cmp,cpy,equ,str}.c \
		ft_to{lower,upper}.c \

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
