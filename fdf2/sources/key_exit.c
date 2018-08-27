#include "fdf.h"

int	key_exit(int keycode)
{
	if (keycode == 53)
	{
		exit(0);
	}
	return (1);
}
