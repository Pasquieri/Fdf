# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpalmier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/23 15:58:49 by cpalmier          #+#    #+#              #
#    Updated: 2018/03/01 19:54:54 by cpalmier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

SRC = src/ft_trace_segment.c main.c

HEADER = fdf.h \
		 Libft/libft.h

COLOR = \033[1;33m

.PHONY : all clean fclean re

all : $(NAME)

$(NAME) : $(OBJ)
	@gcc -Wall -Werror -Wextra -I/usr/local/include -L /usr/local/lib -lmlx \
		-framework OpenGL -framework AppKit $(HEADER) $(SRC)
	@mv a.out $(NAME)
	@echo "${COLOR}all : fdf created √"

%.o : %.c
	@gcc -Wall -Werror -Wextra -I/usr/local/include -L /usr/local/lib -lmlx \
		-framework OpenGL -framework AppKit -c $<c -o $@ -I $(HEADER)

clean :
	@rm -rf $(OBJ)
	@echo "${COLOR}clean √"

fclean : clean
	@rm -rf $(NAME)
	@echo "${COLOR}fclean √"

re : fclean $(NAME)
