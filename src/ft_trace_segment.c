/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trace_segment.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 17:48:37 by mpasquie          #+#    #+#             */
/*   Updated: 2018/02/28 18:42:43 by mpasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

static int		cas_1(void *mlx, void *win, t_coord coord)
{
	int		dx;
	int		e;
	int		dy;

	e = ABS(coord.x2 - coord.x1);
	dx = 2 * e;
	dy = 2 * ABS(coord.y2 - coord.y1);
	while (coord.x1 <= coord.x2)
	{
		mlx_pixel_put(mlx, win, coord.x1, coord.y1, 0xFFFFFF);
		coord.x1++;
		e -= dy;
		if (e < 0)
		{
			coord.y1++;
			e += dx;
		}
	}
	return (0);
}

static int		cas_2(void *mlx, void *win, t_coord coord)
{
	int		dx;
	int		e;
	int		dy;

	e = ABS(coord.x2 - coord.x1);
	dx = 2 * e;
	dy = 2 * ABS(coord.y2 - coord.y1);
	while (coord.x1 >= coord.x2)
	{
		mlx_pixel_put(mlx, win, coord.x1, coord.y1, 0xFFFFFF);
		coord.x1--;
		e -= dy;
		if (e < 0)
		{
			coord.y1++;
			e += dx;
		}
	}
	return (0);
}

static int		cas_3(void *mlx, void *win, t_coord coord)
{
	int		dx;
	int		e;
	int		dy;

	e = ABS(coord.x2 - coord.x1);
	dx = 2 * e;
	dy = 2 * ABS(coord.y2 - coord.y1);
	while (coord.x1 >= coord.x2)
	{
		mlx_pixel_put(mlx, win, coord.x1, coord.y1, 0xFFFFFF);
		coord.x1--;
		e -= dy;
		if (e < 0)
		{
			coord.y1--;
			e += dx;
		}
	}
	return (0);
}

static int		cas_4(void *mlx, void *win, t_coord coord)
{
	int		dx;
	int		e;
	int		dy;

	e = ABS(coord.x2 - coord.x1);
	dx = 2 * e;
	dy = 2 * ABS(coord.y2 - coord.y1);
	while (coord.x1 <= coord.x2)
	{
		mlx_pixel_put(mlx, win, coord.x1, coord.y1, 0xFFFFFF);
		coord.x1++;
		e -= dy;
		if (e < 0)
		{
			coord.y1--;
			e += dx;
		}
	}
	return (0);
}

int		ft_trace_segment(void *mlx, void *win, t_coord coord)
{
	if (coord.x1 < coord.x2 && coord.y1 < coord.y2)
		cas_1(mlx, win, coord);
	else if (coord.x1 > coord.x2 && coord.y1 < coord.y2)
		cas_2(mlx, win, coord);
	else if (coord.x1 > coord.x2 && coord.y1 > coord.y2)
		cas_3(mlx, win, coord);
	else if (coord.x1 < coord.x2 && coord.y1 > coord.y2)
		cas_4(mlx, win, coord);
	return (0);
}
