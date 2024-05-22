/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:23:41 by igchurru          #+#    #+#             */
/*   Updated: 2024/03/03 10:27:02 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 65) || (122 < *str))
			return (0);
		if ((90 < *str) && (*str < 97))
			return (0);
		str++;
	}
	return (1);
}

/*int	main(void)
{
	int		result;
	char	toeval_str[30] = "abcdefGHIJKLmnopqrSTUVWXyz";

	result = ft_str_is_alpha(toeval_str);
	if (result)
		printf("La cadena contiene sólo letras.");
	return (0);
}
*/