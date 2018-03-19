/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vecteur_norm1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalmier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 18:11:17 by cpalmier          #+#    #+#             */
/*   Updated: 2018/03/14 18:17:34 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

t_coord	vecteur_norm1(t_info info)
{
	t_coord	vect1;

	vect1.x = 2; // ??? a rentrer
	vect1.y = 2; // ??? idem
	vect1.z = (info.profondeur - vect1.x * info.plan.x) / info.plan.z; // pas compris
	return (vect1);
}
