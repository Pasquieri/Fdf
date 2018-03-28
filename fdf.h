/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 17:40:05 by mpasquie          #+#    #+#             */
/*   Updated: 2018/03/28 19:20:13 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FDF_H_
# define _FDF_H_

# include "Minilibx/Minilibx/mlx.h"
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <math.h>
# include <unistd.h>
# include "Libft/libft.h"

typedef struct		s_coord
{
	float	x;
	float	y;
	float	z;
}					t_coord;

typedef struct		s_info
{
	int		**tab;
	int		x;
	int		y;
	int		coef;
}					t_info;

int				ft_trace_segment(void *mlx, void *win, t_coord coord1, t_coord coord2);
t_coord			Recupts(int x, int y, int z);
t_info			init_tableau(char *file);
t_info			rempli_tableau(t_info info, char *file);
void			relie_pts(void *mlx, void *win, t_info info);
void			calcul_coef_distance_points(t_info *info);

#endif
