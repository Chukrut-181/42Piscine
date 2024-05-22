/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 12:04:12 by igchurru          #+#    #+#             */
/*   Updated: 2024/03/02 15:35:55 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2) && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*int	main(void)
{
	int	diferencia;

	diferencia = ft_strcmp("123456", "123456");
	printf ("La diferencia es %d.", diferencia);
	return (0);
}
*/