/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalmier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 16:03:36 by cpalmier          #+#    #+#             */
/*   Updated: 2018/05/09 18:42:50 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

static void	verif2(char *file)
{
	if (ft_strcmp(file, "/dev/zero") == 0)
	{
		ft_putstr("error : bad file\n");
		exit(0);
	}
}

void		verif(char *file)
{
	int		i;
	int		fd;
	char	*line;

	verif2(file);
	if (!(fd = open(file, O_RDONLY)))
		exit(0);
	line = NULL;
	while (get_next_line(fd, &line) == 1)
	{
		i = 0;
		while (line[i])
		{
			if ((ft_isdigit(line[i]) == 0) && (line[i] != '-' && line[i] != '+'
						&& line[i] != ' ' && line[i] != '\t'))
			{
				ft_putstr("error : bad file\n");
				free(line);
				exit(0);
			}
			i++;
		}
		free(line);
	}
}
