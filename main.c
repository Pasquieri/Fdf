/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 17:05:32 by mpasquie          #+#    #+#             */
/*   Updated: 2018/02/28 18:40:17 by mpasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		main(void)
{
	void		*mlx;
	void		*win;
	t_coord		coord;

	coord.x1 = 200;
	coord.y1 = 200;
	coord.x2 = 400;
	coord.y2 = 400;
	mlx = mlx_init();
	win = mlx_new_window(mlx, 600, 600, "FEN_test");
	ft_trace_segment(mlx, win, coord);
	mlx_loop(mlx);
	return (0);
}
