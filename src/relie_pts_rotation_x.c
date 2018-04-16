/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   relie_pts_rotation_x.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalmier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 19:43:36 by cpalmier          #+#    #+#             */
/*   Updated: 2018/04/16 16:50:30 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

static void	trace_droite(t_info info, t_coord coord1)
{
	int		z;
	t_coord	coord2;

	z = info.ref_tab[info.cmp_y - 1][info.cmp_x + 1];
	coord2 = recupts((info.pos_x + 1) * info.coef + info.right - (info.rota + 1)
			* info.h,
			(info.pos_y + 1) * info.coef + info.down - (info.h * z));
	ft_trace_seg(info, coord1, coord2);
}

static void	trace_haut(t_info info, t_coord coord1)
{
	int		z;
	t_coord	coord2;

	z = info.ref_tab[info.cmp_y - 2][info.cmp_x];
	coord2 = recupts((info.pos_x + 1) * info.coef + info.right -
			(info.rota * info.h),
			(info.pos_y - 1) * info.coef + info.down - (info.h * z));
	ft_trace_seg(info, coord1, coord2);
}

static void	incrementation(t_info *info)
{
	info->pos_x++;
	info->pos_y++;
	info->rota++;
}

void		relie_pts_rotation_x(t_info info)
{
	int		z;
	t_coord	coord1;

	info.cmp_y = 0;
	while (info.y--)
	{
		info.cmp_x = -1;
		info.cmp_y++;
		info.pos_x = -info.cmp_y;
		info.pos_y = info.cmp_y;
		info.rota = -info.x / 2;
		while (++info.cmp_x < info.x)
		{
			z = info.ref_tab[info.cmp_y - 1][info.cmp_x];
			coord1 = recupts(info.pos_x * info.coef + info.right -
					(info.rota * info.h),
					info.pos_y * info.coef + info.down - (info.h * z));
			if (info.cmp_x < (info.x - 1))
				trace_droite(info, coord1);
			if (info.cmp_y > 1)
				trace_haut(info, coord1);
			incrementation(&info);
		}
	}
}