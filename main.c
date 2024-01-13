/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseng-kh <cseng-kh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 07:32:37 by cseng-kh          #+#    #+#             */
/*   Updated: 2024/01/13 09:01:02 by runner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	rush(int x, int y);
void	ft_putchar(char c);
void	ft_put_corresponding_char(int x, int y, int xi, int yi);

int	main(void)
{
	int	width;
	int	height;

	width = 5;
	height = 3;
	rush(width, height);
	return (0);
}
