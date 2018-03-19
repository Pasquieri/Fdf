/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 17:40:05 by mpasquie          #+#    #+#             */
/*   Updated: 2018/03/13 16:25:00 by mpasquie         ###   ########.fr       */
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
# define ABS(x) (x > 0 ? x : -x)

typedef struct		s_coord
{
	float	x;
	float	y;
	float	z;
}					t_coord;

typedef struct		s_info
{
	t_coord	plan;
	float	profondeur;
}					t_info;

float			translation(t_info info, t_coord pt1);
int				ft_trace_segment(void *mlx, void *win, t_coord coord);
t_coord			Recupts(int x, int y, int z);
t_coord			pt_final(t_coord pt1, float translation, t_info info);

#endif
