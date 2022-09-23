# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agomez-b <agomez-b@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/29 12:01:42 by agomez-b          #+#    #+#              #
#    Updated: 2022/09/17 17:07:03 by agomez-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = *.c libft.h


FLAGS = -Wall -Wextra -Werror
all: $(NAME)
$(NAME):
	gcc $(FLAGS) -o $(NAME) $(SRC)
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean all