/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:07:29 by igchurru          #+#    #+#             */
/*   Updated: 2024/03/03 10:29:21 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if ('0' > *str || '9' < *str)
			return (0);
		str++;
	}
	return (1);
}

/*int	main(void)
{
	int		result;
	char	toeval_str[30] = "1234567890";

	result = ft_str_is_numeric(toeval_str);
	if (result)
		printf("La cadena contiene sólo caracteres numéricos.");
	return (0);
}
*/