/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Chukrut <ichurrucafdt@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 18:07:22 by Chukrut           #+#    #+#             */
/*   Updated: 2024/03/22 18:07:22 by Chukrut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

void	ft_print_row (char left, char mid, char right, int col)
{
	if (col >= 1)
		ft_putchar (left);
	col--;
	while (col >= 2)
	{
		ft_putchar (mid);
		col--;
	}
	if (col == 1)
	{
		ft_putchar (right);
		write (1, "\n", 1);
	}
}

void	rush (int row, int col)
{
	if (row >= 1)
		ft_print_row ('A', 'B', 'C', col);
	row--;
	while (row >= 2)
	{
		ft_print_row ('B', ' ', 'B', col);
		row--;
	}
	if (row == 1)
		ft_print_row ('C', 'B', 'A', col);
}
