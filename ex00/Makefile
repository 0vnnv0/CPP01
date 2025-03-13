# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/13 17:38:14 by anschmit          #+#    #+#              #
#    Updated: 2025/03/13 17:42:40 by anschmit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Brainz

SRC = zombie.cpp newZombie.cpp main.cpp randomChump.cpp

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -f $(NAME)

.PHONY: all clean