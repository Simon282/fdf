#include "fdf.h"

int	tab_alloc(t_fdf *parse)
{
	char	*line;
	int	ret;

	line = NULL;
	parse->lines = 0;
	parse->chars = 0;
	while ((ret = get_next_line(parse->fd, &line)) > 0)
	{
		if (handle_tab(parse, line) == -1)
			return (-1);
	}
	parse->map = ft_memalloc(sizeof(int*) * parse->lines);
	close(parse->fd);
	parse->fd = open(parse->name, O_RDONLY);
	return (0);
}
