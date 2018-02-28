/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 17:40:05 by mpasquie          #+#    #+#             */
/*   Updated: 2018/02/28 18:44:27 by mpasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FDF_
# define _FDF_
# include "minilibx_macos/mlx.h"
# define ABS(x) (x > 0 ? x : -x)

typedef struct		s_coord
{
	int		x1;
	int		x2;
	int		y1;
	int		y2;
}					t_coord;

int				ft_trace_segment(void *mlx, void *win, t_coord coord);

#endif
