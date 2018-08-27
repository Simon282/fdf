#include "fdf.h"

int	nmbr_line(char *str, int y, int save)
{
	int	i = 0;
	int	k = 0;
	int	nb = 0;

	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
		{
			if (str[i] != ' ')
				return (-1);
			k = 0;
		}
		else
		{
			if (k == 0)
				nb ++;
			k++;
		}
		i++;
	}
	return (value(y, nb, save));
}
