/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 17:05:32 by mpasquie          #+#    #+#             */
/*   Updated: 2018/04/06 19:30:48 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int	deal_key(int key, t_info *info)
{
	(void)info;
	if (key == 53)
		exit(0);
	printf("%d\n", key);
	return (0);
}

int			main(int argc, char **argv)
{
	void		*mlx;
	void		*win;
	t_info		info;

	if (argc != 2)
		return (0);
	mlx = mlx_init();
	info.mlx = mlx;
	win = mlx_new_window(mlx, 1000, 1000, argv[1]);
	info.win = win;
	info = init_tableau(argv[1]);
	info = rempli_tableau(info, argv[1]);
	mlx_string_put(mlx, win, 50, 900, 0x00BFFF,
			"appuyer sur ESC pour fermer la fenetre");
	calcul_coef_distance_points(&info);
	relie_pts(mlx, win, info);
	mlx_key_hook(win, deal_key, &info);
	mlx_loop(mlx);
	return (0);
}
