# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpalmier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/23 15:58:49 by cpalmier          #+#    #+#              #
#    Updated: 2018/04/04 16:29:08 by cpalmier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

SRC = src/Recupts.c src/calcul_coef_distance_points.c src/ft_trace_segment.c \
	  src/init_tableau.c main.c src/relie_pts.c src/rempli_tableau.c

HEADER = fdf.h \
		 Libft/libft.h

COLOR = \033[1;33m

.PHONY : all clean fclean re

all : $(NAME)

$(NAME) : $(OBJ)
	@gcc -Wall -Werror -Wextra -I Minilibx/ Minilibx/libmlx.a \
		-framework OpenGL -framework AppKit \
		$(HEADER) $(SRC) libft/libft.a
	@mv a.out $(NAME)
	@echo "${COLOR}all : fdf created √"

%.o : %.c
	@gcc -Wall -Werror -Wextra -I Minilibx/ Minilibx/libmlx.a \
		-framework OpenGL -framework AppKit \
		-c $<c -o $@ -I $(HEADER) Libft/libft.a

clean :
	@rm -rf $(OBJ)
	@echo "${COLOR}clean √"

fclean : clean
	@rm -rf $(NAME)
	@echo "${COLOR}fclean √"

re : fclean $(NAME)
