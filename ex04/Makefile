# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/22 19:53:56 by ohertzbe          #+#    #+#              #
#    Updated: 2024/06/22 19:56:12 by ohertzbe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := g++
CFLAGS := -Wall -Wextra -Werror
NAME := SedIsForLosers
SRC := main.cpp
OBJ := $(patsubst %.cpp, %.o, $(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

