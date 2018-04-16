/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trace_segment.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 17:48:37 by mpasquie          #+#    #+#             */
/*   Updated: 2018/04/16 17:24:00 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

static int	cas_1(t_info info, t_coord coord1, t_coord coord2)
{
	int		dx;
	int		e;
	int		dy;

	e = fabs(coord2.x - coord1.x);
	dx = 2 * e;
	dy = 2 * fabs(coord2.y - coord1.y);
	while (coord1.x <= coord2.x)
	{
		mlx_pixel_put(info.mlx, info.win, coord1.x, coord1.y, info.color1);
		coord1.x++;
		e -= dy;
		while (e < 0)
		{
			if (coord1.y < coord2.y)
				coord1.y++;
			else if (coord1.y > coord2.y)
				coord1.y--;
			mlx_pixel_put(info.mlx, info.win, coord1.x, coord1.y, info.color2);
			e += dx;
		}
	}
	return (0);
}

static int	cas_2(t_info info, t_coord coord1, t_coord coord2)
{
	int		dx;
	int		e;
	int		dy;

	e = fabs(coord2.x - coord1.x);
	dx = 2 * e;
	dy = 2 * fabs(coord2.y - coord1.y);
	while (coord1.x >= coord2.x)
	{
		mlx_pixel_put(info.mlx, info.win, coord1.x, coord1.y, info.color1);
		coord1.x--;
		e -= dy;
		while (e < 0)
		{
			if (coord1.y < coord2.y)
				coord1.y++;
			else if (coord1.y > coord2.y)
				coord1.y--;
			mlx_pixel_put(info.mlx, info.win, coord1.x, coord1.y, info.color2);
			e += dx;
		}
	}
	return (0);
}

static int	cas_3(t_info info, t_coord coord1, t_coord coord2)
{
	if (coord1.y <= coord2.y)
	{
		while (coord1.y <= coord2.y)
		{
			mlx_pixel_put(info.mlx, info.win, coord1.x, coord1.y, info.color1);
			coord1.y++;
		}
	}
	else
	{
		while (coord1.y >= coord2.y)
		{
			mlx_pixel_put(info.mlx, info.win, coord1.x, coord1.y, info.color1);
			coord1.y--;
		}
	}
	return (0);
}

int			ft_trace_seg(t_info info, t_coord coord1, t_coord coord2)
{
	if (coord1.x > coord2.x)
		cas_2(info, coord1, coord2);
	else if (coord1.x < coord2.x)
		cas_1(info, coord1, coord2);
	else if (coord1.x == coord2.x)
		cas_3(info, coord1, coord2);
	return (0);
}
