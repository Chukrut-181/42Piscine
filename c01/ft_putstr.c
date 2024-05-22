/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Chukrut <ichurrucafdt@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:08:46 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/23 21:44:40 by Chukrut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// Incluimos la biblioteca unistd.h para usar la función write
void	ft_putstr(char *str)
// Definimos la función ft_putstr que toma un puntero a un char (cadena de caracteres) como parámetro
{
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
}

int	main(void)
{
	char	*string;

	string = "jdksifgklad6548egASADF)(/!·$&/)123";
	ft_putstr(string);
	return (0);
}
