/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:26:43 by igchurru          #+#    #+#             */
/*   Updated: 2024/03/06 18:20:42 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 || 126 < *str)
			return (0);
		str++;
	}
	return (1);
}

/*int	main(void)
{
	int		result;
	char	toeval_str[50] = "aBcDeFgHiJkLmNoPqRsTuVwXyZ123456789 ! } ~";

	result = ft_str_is_printable(toeval_str);
	if (result)
		printf("La cadena contiene sólo caracteres imprimibles.");
	return (0);
}
*/