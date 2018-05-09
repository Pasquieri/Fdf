/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   consigne.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalmier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 17:16:43 by cpalmier          #+#    #+#             */
/*   Updated: 2018/05/09 17:46:28 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

void	consigne(t_info info)
{
	mlx_string_put(info.mlx, info.win, 40, 850, info.color2,
			"appuyer sur ESC pour fermer la fenetre");
	mlx_string_put(info.mlx, info.win, 40, 875, info.color2,
			"+ : augmenter la hauteur");
	mlx_string_put(info.mlx, info.win, 40, 900, info.color2,
			"- : diminuer la hauteur");
	mlx_string_put(info.mlx, info.win, 40, 925, info.color2,
			"utiliser les fleches pour deplacer");
	mlx_string_put(info.mlx, info.win, 40, 950, info.color2,
			"z : zoomer");
	mlx_string_put(info.mlx, info.win, 40, 975, info.color2,
			"x : dezoomer");
	mlx_string_put(info.mlx, info.win, 40, 1000, info.color2,
			"1-9 : changer les couleurs");
	mlx_string_put(info.mlx, info.win, 40, 1025, info.color2,
			"r : mode rotation (avec + et -)");
	mlx_string_put(info.mlx, info.win, 40, 1050, info.color2,
			"0 : reinitialise la fenetre");
}
