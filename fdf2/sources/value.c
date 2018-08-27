#include "fdf.h"

int	value(int y, int nb, int save)
{
	if (y == 0)
		return (nb);
	else if (save == nb)
		return (save);
	else
		return (-1);
}
