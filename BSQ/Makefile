# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flortie <flortie@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/27 13:52:55 by flortie           #+#    #+#              #
#    Updated: 2022/07/27 13:55:09 by flortie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

%.o: %.c
    $(CC) $(CFLAGS) -o $@ -c $<
    
clean:
	@rm -f *.o
    
fclean: clean
	@rm bsq

re: fclean all
