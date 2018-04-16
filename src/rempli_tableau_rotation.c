/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rempli_tableau_rotation.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalmier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 16:07:01 by cpalmier          #+#    #+#             */
/*   Updated: 2018/04/16 16:56:15 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

static void	ft_error(int j, t_info *info)
{
	if (j < info->x)
	{
		ft_putstr("erreur dans le fichier\n");
		exit(0);
	}
}

void		rempli_tableau_rotation(t_info *info, char *file)
{
	int		i;
	int		j;
	int		fd;
	char	*line;
	char	**tmp;

	i = 0;
	if (!(fd = open(file, O_RDONLY)))
		exit(0);
	while (get_next_line(fd, &line) == 1)
	{
		j = 0;
		info->rota = -info->x / 2;
		tmp = ft_strsplit(line, ' ');
		while (tmp[j])
		{
			info->tab[i][j] = info->rota + ft_atoi(tmp[j]);
			j++;
			info->rota++;
		}
		ft_error(j, info);
		i++;
	}
}
