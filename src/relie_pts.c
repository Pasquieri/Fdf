/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   relie_pts.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 19:00:11 by mpasquie          #+#    #+#             */
/*   Updated: 2018/03/20 19:57:42 by mpasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

void	relie_pts(void	*mlx, void *win, t_info info)
{
	int		x;
	int		y;
	t_coord	coord1;
	t_coord	coord2;

	y = 0;
	while (y < info.y)
	{
		x = 0;
		while (x < info.x - 1)
		{
		//	coord1 = Recupts((x + 1) * 100, (y + 1) * 100, info.tab[x][y]); // * 50 pour que ce soit visible au niveau des pixels, a modif
		//	coord2 = Recupts((x + 2) * 100, (y + 1) * 100, 0);
			coord1.x = (x + 1) * 100;
			coord1.y = (y + 1) * 100;
			coord2.x = (x + 2) * 100;
			coord2.y = (y + 1) * 100;
			ft_trace_segment(mlx, win, coord1, coord2);
			if (y > 0)
			{
			//	coord2 = Recupts((x + 1) * 100, (y - 1) * 100, info.tab[x][y - 1]);
				coord2.x = (x + 1) * 100;
				coord2.y = (y - 1) * 100;
				ft_trace_segment(mlx, win, coord1, coord2);
			}
			x++;
		}
		y++;
	}
}
