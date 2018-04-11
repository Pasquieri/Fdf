/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 17:05:32 by mpasquie          #+#    #+#             */
/*   Updated: 2018/04/11 20:02:22 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void	mode_key(t_info *info)
{
		if (info->mode == 1)
		{
			info->mode = 2;
			rempli_tableau_rotation(info, info->argv);
		}
		else if (info->mode == 2)
		{
			info->mode = 1;
			info->rota_key = 0;
			rempli_tableau(info, info->argv);
		}
}

static int	deal_key(int key, t_info *info)
{
	if (key == 53)
		exit(0);
	else if (key == 69) // +
		info->h = info->h + 1;
	else if (key == 78) // -
		info->h = info->h - 1;
	else if (key == 124 || key == 123 || key == 126 || key == 125)
		deplacement_key(key, info);
	else if (key == 83 || key == 84 || key == 85 || key == 86 || key == 87)
		color_key1(key, info);
	else if (key == 88 || key == 89 || key == 91 || key == 92)
		color_key2(key, info);
	else if (key == 15)
		mode_key(info);
	else if (key == 0 && info->mode == 2) // A
		info->rota_key++;
	else if (key == 2 && info->mode == 2) // D
		info->rota_key--;
	else
		return (0);
	mlx_clear_window(info->mlx, info->win);
	if ((key == 69 || key == 78 ) && info->mode == 2)
		relie_pts_rotation_x(*info);
	else
		relie_pts(*info);
	consigne(*info);
	return (0);
}

int	main(int argc, char **argv)
{
	void		*mlx;
	void		*win;
	t_info		info;

	if (argc != 2)
		return (0);
	mlx = mlx_init();
	win = mlx_new_window(mlx, 1000, 1000, argv[1]);
	init_tableau(argv[1], &info);
	rempli_tableau(&info, argv[1]);
	info.mlx = mlx;
	info.win = win;
	info.argv = argv[1];
	init_info(&info);
	relie_pts(info);
	consigne(info);
	mlx_key_hook(win, deal_key, &info);
	mlx_loop(mlx);
	return (0);
}
