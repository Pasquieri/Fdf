/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_info.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalmier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 19:14:24 by cpalmier          #+#    #+#             */
/*   Updated: 2018/05/09 18:14:25 by cpalmier         ###   ########.fr       */
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
}
