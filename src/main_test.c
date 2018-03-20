#include "../fdf.h"

int	main(int argc, char **argv)
{
	t_info	info;
	int	x;
	int	y;

	if (argc != 2)
		return (0);
	info = init_tableau(argv[1]);
	info = rempli_tableau(info, argv[1]);
	y = 0;
	while (y < info.y)
	{
		x = 0;
		while (x < info.x)
		{
			printf("%d ", info.tab[y][x]);
			x++;
		}
		printf("\n");
		y++;
	}
	return (0);
}
