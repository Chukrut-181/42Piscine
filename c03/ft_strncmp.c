/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:08:00 by igchurru          #+#    #+#             */
/*   Updated: 2024/03/04 11:57:49 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while ((0 < n) && (*s1 != '\0' || *s2 != '\0'))
	{
		if ((*s1 < *s2) || (*s1 > *s2))
			return (*s1 - *s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

/*int	main(void)
{
	int	diferencia;

	diferencia = ft_strncmp("12345a789", "12345z789", 6);
	printf ("La diferencia es %d.", diferencia);
	return (0);
}
*/
//ATENCIÓN AL DETALLE DE EVALUAR LA n CONTRA 1 Y NO CONTRA 0.