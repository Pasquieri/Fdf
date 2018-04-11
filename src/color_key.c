/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_key.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalmier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 16:28:51 by cpalmier          #+#    #+#             */
/*   Updated: 2018/04/11 16:36:14 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

void	color_key1(int key, t_info *info)
{
	if (key == 83) // 1
	{
		info->color1 = 0x00BFFF;
		info->color2 = 0xFF4040;
	}
	else if (key == 84) // 2
	{
		info->color1 = 0xFFD700;
		info->color2 = 0xEE2C2C;
	}
	else if (key == 85) // 3
	{
		info->color1 = 0x00FA9A;
		info->color2 = 0x0000CD;
	}
	else if (key == 86) // 4
	{
		info->color1 = 0x912CEE;
		info->color2 = 0xFF8C00;
	}
	else if (key == 87) // 5
	{
		info->color1 = 0x556B2F;
		info->color2 = 0xFFA500;
	}
}

void	color_key2(int key, t_info *info)
{
	if (key == 88) // 6
	{
		info->color1 = 0xFF8C00;
		info->color2 = 0x6E8B3D;
	}
	else if (key == 89) // 7
	{
		info->color1 = 0xCD2990;
		info->color2 = 0x4EEE94;
	}
	else if (key == 91) // 8
	{
		info->color1 = 0x00F5FF;
		info->color2 = 0x9400D3;
	}
	else if (key == 92) // 9
	{
		info->color1 = 0xFF82AB;
		info->color2 = 0xFF3E96;
	}
}
