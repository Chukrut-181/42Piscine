/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:25:17 by igchurru          #+#    #+#             */
/*   Updated: 2024/02/29 11:35:32 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	swap;//Declaramos una tercera variable.

	swap = *a;//en swap escribimos el 4,
	*a = *b;//en el 4 sobreescribimos el 2,
	*b = swap;// y el en 2 sobreescribimos el 4. Voilá!
}

int main(void)
{
	int x;//Declaramos dos variables y dos punteros.
	int	y;
	int *p1;
	int	*p2;

	x = 4;//Iniciamos la variables con los valores 4 y 2...
	y = 2;
	p1 = &x;// ..y los punteros con las direcciones de esas variables (&).
	p2 = &y;
	ft_swap(p1, p2);//Llamada a función pasando los punteros como argumentos.
	return (0);
}
