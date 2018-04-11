/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deplacement_key.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalmier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 16:41:04 by cpalmier          #+#    #+#             */
/*   Updated: 2018/04/11 17:12:27 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

void	deplacement_key(int key, t_info *info)
{
	if (key == 124) // =>
		info->right = info->right + 5;
	else if (key == 123) // <=
		info->right = info->right - 5;
	else if (key == 126) // haut
		info->down = info->down - 5;
	else if (key == 125) // bas
		info->down = info->down + 5;
}
