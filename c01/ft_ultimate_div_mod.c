/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:58:37 by igchurru          #+#    #+#             */
/*   Updated: 2024/02/29 11:54:24 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)//La función recibe las direcciones y les apunta los punteros.
{
	int	cociente;//Declaramos dos variables para almacenar provisionalmente los resultados.
	int	resto;

	cociente = (*a / *b);//Operamos mediante la indirección de los punteros.
	resto = (*a % *b);
	*a = cociente;//Y sobreescribimos con los punteros según corresponde.
	*b = resto;
}

int	main(void)
{
	int	x;//Declaramos dos variables.
	int	y;

	x = 25;//Las iniciamos.
	y = 5;
	ft_ultimate_div_mod(&x, &y);// Y pasamos sus direcciones a la función.
	return (0);
}
