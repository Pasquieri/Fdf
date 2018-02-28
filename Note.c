/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 17:05:32 by mpasquie          #+#    #+#             */
/*   Updated: 2018/02/28 19:42:20 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minilibx_macos/mlx.h"

int		main(void)
{
	void	*mlx;
	void	*win;
	int		x1;
	int		y1;
	int		x2;
	int		y2;;

	mlx = mlx_init();
	win = mlx_new_window(mlx, 600, 600, "FEN_test");

gcc -I/usr/local/include main.c -L /usr/local/lib -lmlx -framework OpenGL -framework AppKit fdf.h src/ft_trace_segment.c

//	mlx = mlx_init();
//	win = mlx_new_window(mlx, 600, 600, "42lol");
//	mlx_pixel_put(mlx, win, 300, 300, 0xFFFFFF);
//	mlx_loop(mlx);

	return (0);
}
