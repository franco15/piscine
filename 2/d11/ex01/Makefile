# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfranco- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/23 16:27:42 by lfranco-          #+#    #+#              #
#    Updated: 2017/01/23 16:27:44 by lfranco-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = *.c

HEADER = ./include

all: comp

comp:
	gcc -c -Wall -Wextra -Werror $(SRC) -I $(HEADER)
	ar rc *.o

clean:
	rm -f *.o

fclean: clean
	rm -f a.out

re: fclean all
