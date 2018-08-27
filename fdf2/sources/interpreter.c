#include "fdf.h"

int	interpreter(t_fdf *parse)
{
	char	*line;
	char	**tab;
	int	xy[3];

	xy[1] = 0;
	if (tab_alloc(parse) == -1)
		return (-1);
	while ((xy[2] = get_next_line(parse->fd, &line)) > 0)
	{
		xy[0] = 0;
		tab = ft_strsplit(line, ' ');
		parse->map[xy[1]] = ft_memalloc(sizeof(int) * parse->chars);
		while (tab[xy[0]] != NULL)
		{
			parse->map[xy[1]][xy[0]] = ft_atoi(tab[xy[0]]);
			free(tab[xy[0]]);
			xy[0]++;
		}
		free(tab);
		xy[1]++;
	}
	return ((xy[2] == -1) ? -1 : 0);
}
