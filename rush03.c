/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: runner <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 05:29:43 by runner            #+#    #+#             */
/*   Updated: 2024/01/13 06:05:50 by runner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_put_corresponding_char(int x, int y, int xi, int yi);

void	rush(int x, int y)
{
	int	xi;
	int	yi;

	xi = 1;
	yi = 1;
	while (yi <= y)
	{
		while (xi <= x)
		{
			ft_put_corresponding_char(x, y, xi, yi);
			xi++;
		}
		ft_putchar('\n');
		yi++;
		xi = 1;
	}
}
