/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:23:03 by igchurru          #+#    #+#             */
/*   Updated: 2024/03/03 10:35:39 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if ('A' > *str || 'Z' < *str)
			return (0);
		str++;
	}
	return (1);
}

/*int	main(void)
{
	int		result;
	char	toeval_str[30] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	result = ft_str_is_uppercase(toeval_str);
	if (result)
		printf("La cadena contiene sólo letras mayúsculas.");
	return (0);
}
*/