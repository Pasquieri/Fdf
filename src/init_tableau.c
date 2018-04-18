/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_tableau.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 17:37:46 by mpasquie          #+#    #+#             */
/*   Updated: 2018/04/18 23:06:15 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

static void	verif_file(char **split, char *line)
{
	int	i;

	i = -1;
	if (!split || !*line)
	{
		ft_putstr("error : bad file\n");
		free(line);
		while (split[++i])
			free(split[i]);
		free(split);
		exit(0);
	}
}

void		init_tableau(char *file, t_info *info)
{
	int		fd;
	int		i;
	char	*line;
	char	**split;

	info->x = 0;
	line = NULL;
	if (!(fd = open(file, O_RDONLY)))
		exit(0);
	get_next_line(fd, &line);
	info->y = 1;
	split = ft_strsplit(line, ' ');
	verif_file(split, line);
	free(line);
	while (split[info->x])
	{
		free(split[info->x]);
		info->x++;
	}
	free(split);
	while ((get_next_line(fd, &line) == 1))
	{
		info->y++;
		free(line);
	}
	info->tab = (int **)malloc(sizeof(int *) * (info->y + 1));
	info->ref_tab = (int **)malloc(sizeof(int *) * (info->y + 1));
	i = -1;
	while (++i < info->y)
	{
		info->tab[i] = (int *)malloc(sizeof(int) * (info->x + 1));
		info->ref_tab[i] = (int *)malloc(sizeof(int) * (info->x + 1));
	}
}
