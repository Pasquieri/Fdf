/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_info.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalmier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 19:14:24 by cpalmier          #+#    #+#             */
/*   Updated: 2018/05/09 19:22:42 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

void	init_info(t_info *info)
{
	int	coef;

	coef = 700 / (info->x + info->y);
	info->coef = coef;
	info->h = 3;
	info->ref_h = 3;
	info->right = 450;
	info->down = 120;
	info->color1 = 0x00BFFF;
	info->color2 = 0xFF4040;
	info->tab = info->ref_tab;
	info->mode = 1;
}
