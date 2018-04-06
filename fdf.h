/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 17:40:05 by mpasquie          #+#    #+#             */
/*   Updated: 2018/04/06 19:28:33 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "Minilibx/mlx.h"
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <math.h>
# include <unistd.h>
# include "Libft/libft.h"

typedef struct	s_coord
{
	float	x;
	float	y;
	float	z;
}				t_coord;

typedef struct	s_info
{
	int		**tab;
	int		x;
	int		y;
	int		cmp_x;
	int		cmp_y;
	int		pos_x;
	int		pos_y;
	int		coef;
	void	*mlx;
	void	*win;
}				t_info;

int				ft_trace_seg(void *mlx, void *win, t_coord cd1, t_coord cd2);
t_coord			recupts(int x, int y);
t_info			init_tableau(char *file);
t_info			rempli_tableau(t_info info, char *file);
void			relie_pts(void *mlx, void *win, t_info info);
void			calcul_coef_distance_points(t_info *info);

#endif
