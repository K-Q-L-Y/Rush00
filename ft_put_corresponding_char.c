/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_corresponding_char.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: runner <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 05:48:01 by runner            #+#    #+#             */
/*   Updated: 2024/01/13 06:04:25 by runner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
