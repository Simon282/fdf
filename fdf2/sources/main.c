#include "fdf.h"
#include <fcntl.h>

void	fdf(t_fdf *parse)
{
	if (interpreter(parse) == -1)
	{
		ft_putendl("EISH");
		return ;
	}
	mlx(parse);
}

int	main(int ac, char **av)
{
	t_fdf	mine;

	if (ac == 2)
	{
		mine.name = av[1];
		mine.fd = open(mine.name, O_RDONLY);
		fdf(&mine);
	}
	return (0);
}
