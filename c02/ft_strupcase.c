/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:30:14 by igchurru          #+#    #+#             */
/*   Updated: 2024/03/06 18:52:41 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*or_str;

	or_str = str;
	while (*str != '\0')
	{
		if ('a' <= *str && *str <= 'z')
			*str = *str - 32;
		str++;
	}
	return (or_str);
}

/*int	main(void)
{
	char	*mod_str;
	char	dest_str[35] = "Hay que levantar estas minusculas";

	mod_str = ft_strupcase(dest_str);
	printf ("La cadena en mayúsculas es: %s.", mod_str);
	return (0);
}
*/