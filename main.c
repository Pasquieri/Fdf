/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 17:05:32 by mpasquie          #+#    #+#             */
/*   Updated: 2018/05/09 19:31:33 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/fdf.h"

static void	mode_key(t_info *info)
{
	if (info->mode == 1)
	{
		info->mode = 2;
		info->ref_h = info->h;
		info->tab = info->tab_rot;
	}
	else if (info->mode == 2)
	{
		info->mode = 1;
		info->h = info->ref_h;
		info->tab = info->ref_tab;
	}
}

static int	deal_key(int key, t_info *info)
{
	if (key == 53)
		exit(0);
	else if (key == 69 || key == 78)
		hauteur_key(key, info);
	else if (key == 124 || key == 123 || key == 126 || key == 125)
		deplacement_key(key, info);
	else if (key == 83 || key == 84 || key == 85 || key == 86 || key == 87)
		color_key1(key, info);
	else if (key == 88 || key == 89 || key == 91 || key == 92)
		color_key2(key, info);
	else if (key == 15)
		mode_key(info);
	else if (key == 6)
		info->coef++;
	else if (key == 7 && info->coef > 0)
		info->coef--;
	else if (key == 82)
		init_info(info);
	mlx_clear_window(info->mlx, info->win);
	if (info->mode == 2)
		relie_pts_rotation(*info);
	else
		relie_pts(*info);
	consigne(*info);
	return (0);
}

static int	red_cross(int key)
{
	(void)key;
	exit(0);
	return (0);
}

int			main(int argc, char **argv)
{
	void		*mlx;
	void		*win;
	t_info		info;

	if (argc != 2)
	{
		ft_putstr("usage : ./fdf file\n");
		exit(0);
	}
	verif(argv[1]);
	mlx = mlx_init();
	win = mlx_new_window(mlx, 1000, 1100, argv[1]);
	init_tableau(argv[1], &info);
	info.mlx = mlx;
	info.win = win;
	init_info(&info);
	relie_pts(info);
	consigne(info);
	mlx_hook(win, 2, 3, deal_key, &info);
	mlx_hook(win, 17, 3, red_cross, &info);
	mlx_loop(mlx);
	return (0);
}
