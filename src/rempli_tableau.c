/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rempli_tableau.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 17:38:08 by mpasquie          #+#    #+#             */
/*   Updated: 2018/04/12 16:09:34 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

void	rempli_tableau(t_info *info, char *file)
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
		tmp = ft_strsplit(line, ' ');
		while (tmp[j])
		{
			info->tab[i][j] = ft_atoi(tmp[j]);
			info->ref_tab[i][j] = ft_atoi(tmp[j]);
			j++;
		}
		if (j < info->x)
		{
			printf("erreur : bad file\n");
			exit(0);
		}
		i++;
	}
}
