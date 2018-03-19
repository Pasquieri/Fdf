/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 15:57:22 by mpasquie          #+#    #+#             */
/*   Updated: 2018/03/13 16:16:28 by mpasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

float	translation(t_info info, t_coord pt1)
{
	float	translation;

	translation = (info.profondeur - (info.plan.x * pt1.x)
		- (info.plan.y * pt1.y) - (info.plan.z * pt1.z)) / 
		(info.plan.x * info.plan.x + 
		 info.plan.y * info.plan.y + info.plan.z * info.plan.z);
	return (translation);
}
