/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfleisc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 13:40:19 by sfleisc           #+#    #+#             */
/*   Updated: 2018/08/01 15:52:15 by sfleisc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"

int	main(void)
{
	void	*mlx;
	void	*window;
	int		x;
	int		y;

	mlx = mlx_init();
	window = mlx_new_window(mlx, 1000, 1000, "Window");
	y = 50;
	while (y < 150)
	{
		x = 50;
		while (x < 150)
		{
			mlx_pixel_put(mlx, window, x, y, 0x00FFFFFF );
			x++;
		}
		y++;
	}
	mlx_loop(mlx);
	return (0);
}
