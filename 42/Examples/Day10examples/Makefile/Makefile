# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ropatel <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/10 20:39:31 by ropatel           #+#    #+#              #
#    Updated: 2017/07/11 14:51:27 by ropatel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ./srcs/ft_putchar ./srcs/ft_putstr ./srcs/ft_strcmp ./srcs/ft_strlen ./srcs/ft_swap
HEADER = ./includes/
FLAGS = -Wall -Wextra -Werror
OPTION = -c -I $(HEADER)
OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen ft_swap.o

all: $(NAME)

$(NAME): 
	gcc $(FLAG) $(OPTION) $(SRC)
	ar rc $(NAME) $(OBJECTS)
clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
