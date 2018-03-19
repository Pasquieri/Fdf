/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 17:40:05 by mpasquie          #+#    #+#             */
/*   Updated: 2018/03/19 17:20:51 by mpasquie         ###   ########.fr       */
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
	t_coord	plan;
	float	profondeur;
}					t_info;

float			translation(t_info info, t_coord pt1);
int				ft_trace_segment(void *mlx, void *win, t_coord coord1, t_coord coord2);
t_coord			Recupts(int x, int y, int z);
t_coord			pt_final(t_coord pt1, float translation, t_info info);
t_coord			vect_unitaire(t_coord vect);
t_coord			vecteur_norm1(t_info info);
t_coord			vecteur_norm2(t_info info, t_coord vect1);

#endif
