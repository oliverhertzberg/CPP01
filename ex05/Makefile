# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/23 15:25:58 by ohertzbe          #+#    #+#              #
#    Updated: 2024/06/23 15:35:22 by ohertzbe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := Harl
CC := c++
CFLAGS := -Wall -Wextra -Werror
SRC := main.cpp Harl.cpp
OBJ := $(patsubst %.cpp, %.o, $(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re