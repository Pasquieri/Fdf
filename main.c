/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 17:05:32 by mpasquie          #+#    #+#             */
/*   Updated: 2018/03/21 19:32:45 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "Libft/libft.h"

int		main(void)
{
	void		*mlx;
	void		*win;
	t_coord		coord1;
	t_coord		coord2;

	coord1.x = 200;
	coord1.y = 200;
	coord2.x = 200;
	coord2.y = 500;
	mlx = mlx_init();
	win = mlx_new_window(mlx, 1000, 1000, "FEN_test");
	ft_trace_segment(mlx, win, coord1, coord2);
	coord1.x = 100;
	coord1.y = 200;
	coord2.x = 300;
	coord2.y = 400;
	ft_trace_segment(mlx, win, coord1, coord2);
	coord1.x = 100;
	coord1.y = 200;
	coord2.x = 300;
	coord2.y = 300;
	ft_trace_segment(mlx, win, coord1, coord2);
	mlx_loop(mlx);
	return (0);
}
