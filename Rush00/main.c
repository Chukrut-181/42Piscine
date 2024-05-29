/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Chukrut <ichurrucafdt@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 18:05:22 by Chukrut           #+#    #+#             */
/*   Updated: 2024/03/22 18:05:22 by Chukrut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush (int row, int col);

int	ft_atoi (char *str)
{
	int	result;
	int	i;

	i = 0;
	result = 0;
	while ('0' <= str[i] && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

int	ft_is_numeric (char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || '9' < *str)
		{
			write (1, "Invalid argument type.\n", 23);
			return (0);
		}
		str++;
	}
	return (1);
}

int	main (int argc, char *argv[])
{
	int	i;

	if (argc != 3)
		return (write (1, "Error: Arguments must be exactly 3.\n", 36));
	i = 1;
	while (i < 3)
	{
		if (!ft_is_numeric (argv[i]))
			return (1);
		i++;
	}
	rush (ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
