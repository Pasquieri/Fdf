/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pt_final.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 16:11:57 by mpasquie          #+#    #+#             */
/*   Updated: 2018/03/13 16:23:54 by mpasquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

t_coord		pt_final(t_coord pt1, float translation, t_info info)
{
	t_coord		ptf;

	ptf.x = pt1.x + translation * info.plan.x;
	ptf.y = pt1.y + translation * info.plan.y;
	ptf.z = pt1.z + translation * info.plan.z;
	return (ptf);
}
