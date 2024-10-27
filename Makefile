# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/27 14:48:56 by yaait-am          #+#    #+#              #
#    Updated: 2024/10/27 14:49:00 by yaait-am         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES_C = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
FILES_O = srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/ft_strcmp.o
CC_CFLAGS = cc -Wall -Wextra -Werror -c
NAME = libft.a
AR = ar rcs
RM = rm -f
MV = mv *.o srcs

all:
	$(CC_CFLAGS) $(FILES_C)
	$(MV)
	$(AR) $(NAME) $(FILES_O)

clean:
	$(RM) $(FILES_O)

fclean: clean
    $(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
