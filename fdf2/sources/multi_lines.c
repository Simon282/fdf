#include "fdf.h"

void	multi_lines(t_fdf *draw, int x, int y)
{
	int	table[2];

	table[0] = draw->dx + (x - y);
	table[1] = draw->dy + draw->map[y / draw->sy][x / draw->sx] * draw->z + x + y;

	if (x / draw->sx < draw->chars - 1 && y / draw->sy < draw->lines)
		line_drawer(draw, table, draw->dx + ((x + draw->sx) - y),\
		draw->dy + draw->map[y / draw->sy][x / draw->sx + 1] * draw-> z + \
		(x + draw->sx) + y);
	if (y / draw->sy < draw->lines - 1 && x / draw->sx < draw->chars)
		line_drawer(draw, table, draw->dx + (x - (y + draw->dy)),
		draw->dy + draw->map[y / draw->sy + 1][x / draw->sx] * draw-> z + 
		x + (y + draw->sy));
}
