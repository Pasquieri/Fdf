/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 17:05:32 by mpasquie          #+#    #+#             */
/*   Updated: 2018/04/10 18:37:54 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int	deal_key(int key, t_info *info)
{
	(void)info;
	if (key == 53)
		exit(0);
	else if (key == 69) // +
	{
		info->h = info->h + 1;
		mlx_clear_window(info->mlx, info->win);
		relie_pts(*info);
		consigne(*info);
	}
	else if (key == 78) // -
	{
		info->h = info->h - 1;
		mlx_clear_window(info->mlx, info->win);
		relie_pts(*info);
		consigne(*info);
	}
	else if (key == 124) // =>
	{
		info->right = info->right + 5;
		mlx_clear_window(info->mlx, info->win);
		relie_pts(*info);
		consigne(*info);
	}
	else if (key == 123) // <=
	{
		info->right = info->right - 5;
		mlx_clear_window(info->mlx, info->win);
		relie_pts(*info);
		consigne(*info);
	}
	else if (key == 126) // haut
	{
		info->down = info->down - 5;
		mlx_clear_window(info->mlx, info->win);
		relie_pts(*info);
		consigne(*info);
	}
	else if (key == 125) // bas
	{
		info->down = info->down + 5;
		mlx_clear_window(info->mlx, info->win);
		relie_pts(*info);
		consigne(*info);
	}
	else if (key == 83) // 1
	{
		info->color1 = 0x00BFFF;
		info->color2 = 0xFF4040;
		mlx_clear_window(info->mlx, info->win);
		relie_pts(*info);
		consigne(*info);
	}
	else if (key == 84) // 2
	{
		info->color1 = 0xFFD700;
		info->color2 = 0xEE2C2C;
		mlx_clear_window(info->mlx, info->win);
		relie_pts(*info);
		consigne(*info);
	}
	else if (key == 85) // 3
	{
		info->color1 = 0x00FA9A;
		info->color2 = 0x0000CD;
		mlx_clear_window(info->mlx, info->win);
		relie_pts(*info);
		consigne(*info);
	}
	else if (key == 86) // 4
	{
		info->color1 = 0x912CEE;
		info->color2 = 0xFF8C00;
		mlx_clear_window(info->mlx, info->win);
		relie_pts(*info);
		consigne(*info);
	}
	else if (key == 87) // 5
	{
		info->color1 = 0x556B2F;
		info->color2 = 0xFFA500;
		mlx_clear_window(info->mlx, info->win);
		relie_pts(*info);
		consigne(*info);
	}
	else if (key == 88) // 6
	{
		info->color1 = 0xFF8C00;
		info->color2 = 0x6E8B3D;
		mlx_clear_window(info->mlx, info->win);
		relie_pts(*info);
		consigne(*info);
	}
	else if (key == 89) // 7
	{
		info->color1 = 0xCD2990;
		info->color2 = 0x4EEE94;
		mlx_clear_window(info->mlx, info->win);
		relie_pts(*info);
		consigne(*info);
	}
	else if (key == 91) // 8
	{
		info->color1 = 0x00F5FF;
		info->color2 = 0x9400D3;
		mlx_clear_window(info->mlx, info->win);
		relie_pts(*info);
		consigne(*info);
	}
	else if (key == 92) // 9
	{
		info->color1 = 0xFF82AB;
		info->color2 = 0xFF3E96;
		mlx_clear_window(info->mlx, info->win);
		relie_pts(*info);
		consigne(*info);
	}
	printf("%d\n", key);
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
	info = init_tableau(argv[1]);
	info = rempli_tableau(info, argv[1]);
	calcul_coef_distance_points(&info);
	info.mlx = mlx;
	info.win = win;
	info.h = 3;
	info.right = 450;
	info.down = 120;
	info.color1 = 0x00BFFF;
	info.color2 = 0xFF4040;
	consigne(info);
	relie_pts(info);
	mlx_key_hook(win, deal_key, &info);
	mlx_loop(mlx);
	return (0);
}
