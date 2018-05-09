/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deplacement_key.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalmier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 16:41:04 by cpalmier          #+#    #+#             */
/*   Updated: 2018/05/09 17:58:08 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

void	deplacement_key(int key, t_info *info)
{
	if (key == 124)
		info->right = info->right + 8;
	else if (key == 123)
		info->right = info->right - 8;
	else if (key == 126)
		info->down = info->down - 8;
	else if (key == 125)
		info->down = info->down + 8;
}
