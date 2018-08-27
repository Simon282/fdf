#include "fdf.h"

int	handle_tab(t_fdf *parse, char *line)
{
	int	x;
	char	**tab;

	x = 0;
	tab = ft_strsplit(line, ' ');
	while (tab[x])
	{
		free (tab[x]);
		x++;
	}
	if (parse->lines == 0)
		parse->chars = x;
	else
	{
		if (x != parse->chars)
			return (-1);
	}
	free(line);
	free(tab);
	parse->lines++;
	return (0);
}
