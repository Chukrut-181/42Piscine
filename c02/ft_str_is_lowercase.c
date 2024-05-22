/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:12:43 by igchurru          #+#    #+#             */
/*   Updated: 2024/03/03 10:33:21 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str < 'a' || 'z' < *str)
			return (0);
		str++;
	}
	return (1);
}

/*int	main(void)
{
	int		result;
	char	toeval_str[30] = "abcdefghijklmnopqrstuvwxyz";

	result = ft_str_is_lowercase(toeval_str);
	if (result)
		printf("La cadena contiene sólo letras minúsculas.");
	return (0);
}
*/