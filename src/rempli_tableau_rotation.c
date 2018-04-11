/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rempli_tableau_rotation.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalmier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 16:07:01 by cpalmier          #+#    #+#             */
/*   Updated: 2018/04/11 17:22:39 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

void	rempli_tableau_rotation(t_info *info, char *file)
{
	int		i;
	int		j;
	int		fd;
	char	*line;
	char	**tmp;

	i = 0;
	if (!(fd = open(file, O_RDONLY)))
		exit (0);
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
		if (j < info->x)
		{
			printf("pas bon\n"); // faire un return qui stop touuut car ligne incorrect
			exit (1);
		}
		i++;
	}
}
