/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalmier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 16:03:36 by cpalmier          #+#    #+#             */
/*   Updated: 2018/04/12 16:15:26 by cpalmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

void	verif(char *file)
{
	int		i;
	int		fd;
	char	*line;

	if (!(fd = open(file, O_RDONLY)))
		exit(0);
	while (get_next_line(fd, &line) == 1)
	{
		i = 0;
		while (line[i])
		{
			if ((ft_isdigit(line[i]) == 0) && (line[i] != '-' && line[i] != '+'
						&& line[i] != ' ' && line[i] != '\t'))
			{
				printf("erreur : bad file\n");
				exit(0);
			}
			i++;
		}
	}
}
