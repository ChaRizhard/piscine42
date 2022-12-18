# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hli <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/10 14:39:33 by hli               #+#    #+#              #
#    Updated: 2022/12/11 19:54:42 by hli              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
SRC = main.c funcs.c funcs2.c funcs3.c funcs4.c
OPS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(OPS) -o $(NAME) $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

test: fclean
	gcc -o $(NAME) $(SRC)
