#include "fdf.h"

void	mlx(t_fdf *key)
{
	key->check = 0;
	key->mlx = mlx_init();
	key->win = mlx_new_window(key->mlx, WIDTH, HEIGHT, "YESSSSS");
	draw(key);
	mlx_key_hook(key->win, key_exit, 0);
	mlx_loop(key->mlx);
}
