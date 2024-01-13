/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: runner <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 05:23:18 by runner            #+#    #+#             */
/*   Updated: 2024/01/13 06:32:54 by runner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	rush(int x, int y);
void	ft_putchar(char c);
void	ft_put_corresponding_char(int x, int y, int xi, int yi);

int	main(int argc, char *argv[])
{
	int	width;
	int	height;

	if (argc == 3)
	{
		width = atoi(argv[1]);
		height = atoi(argv[2]);
		rush(width, height);
	}
	return (0);
}
