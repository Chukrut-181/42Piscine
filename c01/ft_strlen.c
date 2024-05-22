/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:57:45 by igchurru          #+#    #+#             */
/*   Updated: 2024/02/29 12:11:33 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (*str != '\0')//La función cuenta cada carácter del string mientras no encuentre el nulo.
	{
		i++;
		str++;
	}
	return (i);//Y devuelve el valor de la i.
}

int	main(void)
{
	char	string[] = "123456789qwertyuIOP";//Declaramos un string.
	int	length = ft_strlen(string);//Y llamamos a la función con su dirección.
	printf("%d", length);//Imprimimos para comprobar.
	return (0);
}