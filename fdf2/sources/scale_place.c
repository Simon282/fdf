#include "fdf.h"

void	scale_place(t_fdf *draw)
{
	if (draw->check == 0)
	{
		draw->z = -6;
		draw->dx = WIDTH * 0.3;
		draw->dy = 3;
		draw->sx = (WIDTH * 0.3) / (draw->chars - 1);
		draw->sy = (HEIGHT * 0.2) / (draw->lines - 1);
		draw->color = 0x0000FFFF;
	}
	draw->check++;
}
