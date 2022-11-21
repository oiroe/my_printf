# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 01:33:27 by pboonpro          #+#    #+#              #
#    Updated: 2022/11/22 01:33:27 by pboonpro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c c.c d.c p.c s.c x.c upperx.c u.c \

OBJ = $(SRC:%.c=%.o)

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	ar rsc $(NAME) $(OBJ)

%.o : %.c
	gcc $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
