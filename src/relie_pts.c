/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   relie_pts.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 19:00:11 by mpasquie          #+#    #+#             */
/*   Updated: 2018/03/28 19:51:35 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

/*info.x = 8

1000 - 300 = 700

+150==> decalage depart !

700/7 = 100 ==> donc multiplie par 100 + 150

250 350 450 550 650 750 850 

*/
void	relie_pts(void	*mlx, void *win, t_info info)
{
	int		x;
	int		y;
	t_coord	coord1;
	t_coord	coord2;

	y = -1;
	while (++y < info.y)
	{
		x = -1;
		while (++x <= (info.x - 1))
		{
			coord1 = Recupts(x * info.coef + 150 , y * info.coef + 150, 0); // * 50 pour que ce soit visible au niveau des pixels, a modif
			if (x < (info.x - 1))
			{
				coord2 = Recupts((x + 1) * info.coef + 150, y * info.coef + 150, 0);
				ft_trace_segment(mlx, win, coord1, coord2);
			}
			if (y > 0)
			{
				coord2 = Recupts(x * info.coef + 150, (y - 1) * info.coef + 150, 0);
				ft_trace_segment(mlx, win, coord1, coord2);
			}
		}
	}
}
