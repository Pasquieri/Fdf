/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcul_coef_distance_points.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalmier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 19:14:24 by cpalmier          #+#    #+#             */
/*   Updated: 2018/04/04 19:26:11 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

void	calcul_coef_distance_points(t_info *info)
{
	int	coef;
	int	nb;

	nb = info->x + info->y;
	coef = 700 / nb;
	info->coef = coef;
}
