/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vecteur_norm2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalmier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 18:17:50 by cpalmier          #+#    #+#             */
/*   Updated: 2018/03/14 18:23:44 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

t_coord	vecteur_norm2(t_info info, t_coord vect1)
{
	t_coord	vect2;

	vect2.x = info.plan.y * vect1.z - info.plan.z * vect1.y;
	vect2.y = info.plan.z * vect1.x - info.plan.x * vect1.z;
	vect2.z = info.plan.x * vect1.y - info.plan.y * vect1.x;
	return (vect2);
}
