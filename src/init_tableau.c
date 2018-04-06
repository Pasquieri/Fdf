/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_tableau.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 17:37:46 by mpasquie          #+#    #+#             */
/*   Updated: 2018/04/06 16:50:59 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

t_info	init_tableau(char *file)
{
	int		fd;
	int		i;
	char	*line;
	char	**split;
	t_info	info;

	info.x = 0;
	line = NULL;
	if (!(fd = open(file, O_RDONLY)))
		return (info);
	get_next_line(fd, &line);
	info.y = 1;
	split = ft_strsplit(line, ' ');
	while (split[info.x])
		info.x++;
	while ((get_next_line(fd, &line) == 1))
		info.y++;
	info.tab = (int **)malloc(sizeof(int *) * (info.y + 1));
	i = 0;
	while (i < info.y)
	{
		info.tab[i] = (int *)malloc(sizeof(int) * (info.x + 1));
		i++;
	}
	return (info);
}
