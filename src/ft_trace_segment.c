/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trace_segment.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 17:48:37 by mpasquie          #+#    #+#             */
/*   Updated: 2018/03/19 17:20:55 by mpasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

static int		cas_1(void *mlx, void *win, t_coord coord1, t_coord coord2)
{
	int		dx;
	int		e;
	int		dy;

	e = fabs(coord2.x - coord1.x);
	dx = 2 * e;
	dy = 2 * fabs(coord2.y - coord1.y);
	while (coord1.x <= coord2.x)
	{
		mlx_pixel_put(mlx, win, coord1.x, coord1.y, 0xFFFFFF);
		coord1.x++;
		e -= dy;
		if (e < 0)
		{
			coord1.y++;
			e += dx;
		}
	}
	return (0);
}

static int		cas_2(void *mlx, void *win, t_coord coord1, t_coord coord2)
{
	int		dx;
	int		e;
	int		dy;

	e = fabs(coord2.x - coord1.x);
	dx = 2 * e;
	dy = 2 * fabs(coord2.y - coord1.y);
	while (coord1.x >= coord2.x)
	{
		mlx_pixel_put(mlx, win, coord1.x, coord1.y, 0xFFFFFF);
		coord1.x--;
		e -= dy;
		if (e < 0)
		{
			coord1.y++;
			e += dx;
		}
	}
	return (0);
}

static int		cas_3(void *mlx, void *win, t_coord coord1, t_coord coord2)
{
	int		dx;
	int		e;
	int		dy;

	e = fabs(coord2.x - coord1.x);
	dx = 2 * e;
	dy = 2 * fabs(coord2.y - coord1.y);
	while (coord1.x >= coord2.x)
	{
		mlx_pixel_put(mlx, win, coord1.x, coord1.y, 0xFFFFFF);
		coord1.x--;
		e -= dy;
		if (e < 0)
		{
			coord1.y--;
			e += dx;
		}
	}
	return (0);
}

static int		cas_4(void *mlx, void *win, t_coord coord1, t_coord coord2)
{
	int		dx;
	int		e;
	int		dy;

	e = fabs(coord2.x - coord1.x);
	dx = 2 * e;
	dy = 2 * fabs(coord2.y - coord1.y);
	while (coord1.x <= coord2.x)
	{
		mlx_pixel_put(mlx, win, coord1.x, coord1.y, 0xFFFFFF);
		coord1.x++;
		e -= dy;
		if (e < 0)
		{
			coord1.y--;
			e += dx;
		}
	}
	return (0);
}

int		ft_trace_segment(void *mlx, void *win, t_coord coord1, t_coord coord2)
{
	if (coord1.x < coord2.x && coord1.y < coord2.y)
		cas_1(mlx, win, coord1, coord2);
	else if (coord1.x > coord2.x && coord1.y < coord2.y)
		cas_2(mlx, win, coord1, coord2);
	else if (coord1.x > coord2.x && coord1.y > coord2.y)
		cas_3(mlx, win, coord1, coord2);
	else if (coord1.x < coord2.x && coord1.y > coord2.y)
		cas_4(mlx, win, coord1, coord2);
	return (0);
}
