#ifndef FDF_H
# define FDF_H

# include "../minilibx_macos/mlx.h"
# include <math.h>
# include "../libft/includes/libft.h"
# define WIDTH 1560
# define HEIGHT 1300

typedef struct		s_fdf
{
	int		fd;
	char		*name;
	void		*mlx;
	void		*win;
	int		**map;
	int		lines;
	int		check;
	int		chars;
	int		z;
	int		dx;
	int		dy;
	int		sx;
	int		sy;
	unsigned long	color;
}			t_fdf;

void	multi_lines(t_fdf *draw, int x, int y);
void	draw(t_fdf *draw);
void	scale_place(t_fdf *draw);
void	line_drawer(t_fdf *draw, int *tab, int x, int y);
void	mlx(t_fdf *key);
void	fdf(t_fdf *parse);
int	key_exit(int keycode);
int	interpreter(t_fdf *parse);
int	tab_alloc(t_fdf *parse);
int	handle_tab(t_fdf *parse, char *line);
int	nmbr_line(char *str, int y, int save);
int	value(int y, int nb, int save);

#endif
