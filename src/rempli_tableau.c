/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rempli_tableau.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 17:38:08 by mpasquie          #+#    #+#             */
/*   Updated: 2018/05/11 16:08:36 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

static void	ft_error(int j, t_info *info)
{
	if (j < info->x)
	{
		ft_putstr("error : bad file\n");
		exit(0);
	}
}

static void	ft_free(char **line, char ***tmp)
{
	free(*line);
	free(*tmp);
}

void		rempli_tableau(t_info *info, char *file)
{
	int		i;
	int		j;
	int		fd;
	char	*line;
	char	**tmp;

	i = 0;
	if (!(fd = open(file, O_RDONLY)))
		exit(0);
	line = NULL;
	while (get_next_line(fd, &line) == 1)
	{
		j = 0;
		tmp = ft_strsplit(line, ' ');
		while (tmp[j])
		{
			info->ref_tab[i][j] = ft_atoi(tmp[j]);
			free(tmp[j]);
			j++;
		}
		i++;
		ft_free(&line, &tmp);
		ft_error(j, info);
	}
	free(line);
}
