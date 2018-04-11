/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   consigne.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalmier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 17:16:43 by cpalmier          #+#    #+#             */
/*   Updated: 2018/04/11 15:57:22 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

void	consigne(t_info info)
{
	mlx_string_put(info.mlx, info.win, 50, 850, info.color2,
			"appuyer sur ESC pour fermer la fenetre");
	mlx_string_put(info.mlx, info.win, 50, 875, info.color2,
			"+ : augmenter la hauteur");
	mlx_string_put(info.mlx, info.win, 50, 900, info.color2,
			"- : diminuer la hauteur");
	mlx_string_put(info.mlx, info.win, 50, 925, info.color2,
			"utiliser les fleches pour deplacer");
	mlx_string_put(info.mlx, info.win, 50, 950, info.color2,
			"1-9 : changer les couleurs");
}
