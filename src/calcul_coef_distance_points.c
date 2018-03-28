/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcul_coef_distance_points.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalmier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 19:14:24 by cpalmier          #+#    #+#             */
/*   Updated: 2018/03/28 19:49:30 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

void	calcul_coef_distance_points(t_info *info)
{
	int	coef;
	int	nb;

	if (info->x > info->y)
		nb = info->x - 1;
	else
		nb = info->y - 1;
	coef = 700 / nb;
	info->coef = coef;
}
