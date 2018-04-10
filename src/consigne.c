/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   consigne.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalmier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 17:16:43 by cpalmier          #+#    #+#             */
/*   Updated: 2018/04/10 18:40:08 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

void	consigne(t_info info)
{
	mlx_string_put(info.mlx, info.win, 50, 850, info.color1,
			"appuyer sur ESC pour fermer la fenetre");
	mlx_string_put(info.mlx, info.win, 50, 875, info.color1,
			"+ : augmenter la hauteur");
	mlx_string_put(info.mlx, info.win, 50, 900, info.color1,
			"- : diminuer la hauteur");
	mlx_string_put(info.mlx, info.win, 50, 925, info.color1,
			"utiliser les fleches pour deplacer");
	mlx_string_put(info.mlx, info.win, 50, 950, info.color1,
			"1-9 : changer les couleurs");
}
