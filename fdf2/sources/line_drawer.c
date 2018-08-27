#include "fdf.h"

void	line_drawer(t_fdf *draw, int *tab, int x, int y)
{
	int	tabx[2];
	int	taby[2];
	int	end[2];
	int	x0;
	int	y0;

	x0 = tab[0];
	y0 = tab[1];
	tabx[0] = abs(x - x0);
	tabx[1] = x0 < x ? 1 : -1;
	taby[0] = abs(y - y0);
	taby[1] = y0 < y ? 1 : -1;
	end[0] = (tabx[0] > taby[0] ? tabx[0] : -taby[0]) / 2;
	while (x0 != x || y0 != y)
	{
		mlx_pixel_put(draw->mlx, draw->win, x0, y0, draw->color);
		end[1] = end[0];
		end[1] > -tabx[0] ? end[0] -= taby[0] : 1 == 1;
		end[1] > -tabx[0] ? x0 += tabx[1] : 1 == 1;
		end[1] < taby[0] ? end[0] += tabx[0] : 1 == 1;
		end[1] < taby[0] ? y0 += taby[1] : 1 == 1;
	}
}
