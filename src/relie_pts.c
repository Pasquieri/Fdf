/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   relie_pts2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalmier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 16:51:18 by cpalmier          #+#    #+#             */
/*   Updated: 2018/04/04 19:48:26 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

void	relie_pts(void *mlx, void *win, t_info info)
{
	int		cmp_x;
	int		pos_x;
	int		cmp_y;
	int		pos_y;
	int		z1;
	int		z2;
	int		z3;
	t_coord	coord1;
	t_coord	coord2;
	t_coord coord3;;

	cmp_y = 0;
	while (info.y--)
	{
		cmp_x = -1;
		cmp_y++;
		pos_x = -cmp_y;
		pos_y = cmp_y;
		while (++cmp_x <= (info.x - 1))
		{
			z1 = info.tab[cmp_y - 1][cmp_x];
			coord1 = Recupts(pos_x * info.coef + 500, pos_y * info.coef + 150 - (z1* 2), 0);
			if (cmp_x < (info.x - 1))
			{
				z2 = info.tab[cmp_y - 1][cmp_x + 1];
				coord2 = Recupts((pos_x + 1) * info.coef + 500, (pos_y + 1) * info.coef + 150 - (2*z2), 0);
				ft_trace_segment(mlx, win, coord1, coord2);
			}
			if (cmp_y > 1)
			{
				z3 = info.tab[cmp_y - 2][cmp_x];
				coord3 = Recupts((pos_x + 1) * info.coef + 500, (pos_y - 1) * info.coef + 150 - (z3 * 2), 0);
				ft_trace_segment(mlx, win, coord1, coord3);
			}
			pos_x++;
			pos_y++;
		}
	}
}
