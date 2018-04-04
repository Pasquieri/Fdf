/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 17:05:32 by mpasquie          #+#    #+#             */
/*   Updated: 2018/04/03 16:49:26 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

int		main(int argc, char **argv)
{
	void		*mlx;
	void		*win;
	t_info		info;

	if (argc != 2)
		return (0);
	mlx = mlx_init();
	win = mlx_new_window(mlx, 1000, 1000, "FEN_test");
	info = init_tableau(argv[1]);
	info = rempli_tableau(info, argv[1]);
	calcul_coef_distance_points(&info);
	relie_pts(mlx, win, info);
	mlx_loop(mlx);
	return (0);
}
