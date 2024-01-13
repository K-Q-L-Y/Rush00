/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseng-kh <cseng-kh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 09:09:58 by cseng-kh          #+#    #+#             */
/*   Updated: 2024/01/13 09:10:02 by cseng-kh         ###   ########.fr       */
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

void	ft_put_corresponding_char(int x, int y, int xi, int yi)
{
	if (xi == 1 && (yi == 1 || yi == y))
	{
		ft_putchar('A');
	}
	else if (xi == x && (yi == 1 || yi == y))
	{
		ft_putchar('C');
	}
	else if (xi == 1 || yi == 1 || xi == x || yi == y)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}
