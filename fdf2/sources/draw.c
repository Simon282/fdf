#include "fdf.h"

void	draw(t_fdf *draw)
{
	int	x = 0;
	int	y = 0;

	scale_place(draw);
	while (x / draw->sx < draw->chars || y / draw->sy < draw->lines)
	{
		if (x / draw->sx == draw->chars)
		{
			x = 0;
			y += draw->sy;
		}
		multi_lines(draw, x, y);
		x += draw->sx;
	}
}
