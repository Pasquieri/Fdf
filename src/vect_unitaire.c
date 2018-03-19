/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_unitaire.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalmier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 18:57:59 by cpalmier          #+#    #+#             */
/*   Updated: 2018/03/14 18:58:04 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

t_coord	vect_unitaire(t_coord vect)
{
	float	norme;

	norme = (float)sqrt(vect.x * vect.x + vect.y * vect.y + vect.z * vect.z);
	vect.x = vect.x / norme;
	vect.y = vect.y / norme;
	vect.z = vect.z / norme;
	return (vect);
}
