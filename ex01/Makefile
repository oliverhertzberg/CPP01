# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/21 20:02:44 by ohertzbe          #+#    #+#              #
#    Updated: 2024/06/21 20:04:14 by ohertzbe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC := c++
CFLAGS := -Wall -Wextra -Werror
NAME := MoarBrainz
SRC := main.cpp Zombie.cpp zombieHorde.cpp
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