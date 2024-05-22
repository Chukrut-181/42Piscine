/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Chukrut <ichurrucafdt@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 17:42:43 by igchurru          #+#    #+#             */
/*   Updated: 2024/04/28 11:10:44 by Chukrut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
// Función que ordena un array de enteros en orden ascendente
{
	int	i;
	// Contador de bucle para el bucle exterior (itera a través del array)
	int	j;
	// Contador de bucle para el bucle interior (compara elementos)
	int	temp;
	// Variable temporal utilizada para intercambiar elementos durante la ordenación

	i = 0;
	// Inicialización del contador 'i' a 0 (comienza desde el primer elemento)
	while (i < size)
	// Bucle externo: continúa mientras 'i' sea menor que el tamaño del array
	{
		j = i + 1;
		// Inicialización del contador 'j' a una posición por delante de 'i' (comparación del elemento actual con los siguientes)
		while (j < size)
		// Bucle interno: continúa mientras 'j' sea menor que el tamaño del array (evitando accesos fuera de rango)
		{
			if (tab[i] > tab[j])
			// Si el elemento actual ('tab[i]') es mayor que el elemento en la siguiente posición ('tab[j]')
			{
				temp = tab[i];
				// Se almacena el valor del elemento actual en la variable temporal
				tab[i] = tab[j];
				// Se sobrescribe el elemento actual con el valor del siguiente elemento
				tab[j] = temp;
				// Se coloca el valor previamente almacenado (del elemento actual) en la posición del siguiente elemento, intercambiándolos efectivamente
				j++;
				// Se incrementa 'j' para pasar al siguiente elemento para la comparación
			}
			i++;
			// Se incrementa 'i' incluso si no se ha realizado ningún intercambio, ya que el elemento actual ya se ha comparado con sus elementos posteriores
		}
	}
}

int	main(void)
{
  int	my_array[4] = {5, 3, 8, 9};
  int	size = 4;
  int	k = 0;

  ft_sort_int_tab(my_array, size);
  while (k < size && my_array[k])
  {
  	printf ("%d ", my_array[k]);
	k++;
  }
  return 0;
}
