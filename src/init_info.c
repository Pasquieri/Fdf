/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_info.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalmier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 19:14:24 by cpalmier          #+#    #+#             */
/*   Updated: 2018/04/12 15:45:22 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

void	init_info(t_info *info)
{
	int	coef;

	coef = 700 / (info->x + info->y);
	info->coef = coef;
	info->h = 3;
	info->right = 450;
	info->down = 120;
	info->color1 = 0x00BFFF;
	info->color2 = 0xFF4040;
	info->mode = 1;
	info->rota_key = 0;
}
