# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpalmier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/23 15:58:49 by cpalmier          #+#    #+#              #
#    Updated: 2018/04/12 16:10:48 by cpalmier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

SRC = src/recupts.c src/init_info.c src/ft_trace_seg.c src/verif.c \
	  src/init_tableau.c main.c src/relie_pts.c src/rempli_tableau.c \
	  src/consigne.c src/rempli_tableau_rotation.c src/color_key.c \
	  src/deplacement_key.c src/relie_pts_rotation.c src/relie_pts_rotation_x.c

HEADER = fdf.h \
		 Libft/libft.h

OBJ = $(SRC:.c=.o)

COLOR = \033[1;33m
COLOR_OFF = \033[0m

.PHONY : all clean fclean re

all : $(NAME)

$(NAME) : $(OBJ)
	make -C Libft
	make -C Minilibx
	@gcc -Wall -Werror -Wextra -I Minilibx/ Minilibx/libmlx.a \
		-framework OpenGL -framework AppKit \
		$(HEADER) $(SRC) libft/libft.a
	@mv a.out $(NAME)
	@echo "${COLOR}all : fdf created √${COLOR_OFF}"

./%.o : src/%.c
	@gcc -Wall -Werror -Wextra -I Minilibx/ Minilibx/libmlx.a \
		-framework OpenGL -framework AppKit \
		-c $< -o $@ -I $(HEADER) Libft/libft.a

clean :
	make -C Libft clean
	make -C Minilibx clean
	@rm -rf $(OBJ)
	@echo "${COLOR}FDF clean √${COLOR_OFF}"

fclean : clean
	make -C Libft fclean
	@rm -rf $(NAME)
	@echo "${COLOR}FDF fclean √${COLOR_OFF}"

re : fclean all
