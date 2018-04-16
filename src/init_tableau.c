/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_tableau.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 17:37:46 by mpasquie          #+#    #+#             */
/*   Updated: 2018/04/12 15:45:43 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

void	init_tableau(char *file, t_info *info)
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
	while (split[info->x])
		info->x++;
	while ((get_next_line(fd, &line) == 1))
		info->y++;
	info->tab = (int **)malloc(sizeof(int *) * (info->y + 1));
	info->ref_tab = (int **)malloc(sizeof(int *) * (info->y + 1));
	i = -1;
	while (++i < info->y)
	{
		info->tab[i] = (int *)malloc(sizeof(int) * (info->x + 1));
		info->ref_tab[i] = (int *)malloc(sizeof(int) * (info->x + 1));
	}
}
