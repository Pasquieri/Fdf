/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   relie_pts.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 19:00:11 by mpasquie          #+#    #+#             */
/*   Updated: 2018/03/22 17:46:49 by cpalmier         ###   ########.fr       */
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
		while (x < (info.x - 1))
		{
			coord1 = Recupts((x + 1) * 50, (y + 1) * 50, 0); // * 50 pour que ce soit visible au niveau des pixels, a modif
			coord2 = Recupts((x + 2) * 50, (y + 1) * 50, 0);
			ft_trace_segment(mlx, win, coord1, coord2);
			if (y > 0)
			{
				coord2 = Recupts((x + 1) * 50, y * 50, 0);
				ft_trace_segment(mlx, win, coord1, coord2);
			}
			x++;
		}
		if (y > 0)
		{
			coord1 = Recupts((x + 1) * 50, (y + 1) * 50, 0);
			coord2 = Recupts((x + 1) * 50, y * 50, 0);
			ft_trace_segment(mlx, win, coord1, coord2);
		}
		y++;
	}
}
