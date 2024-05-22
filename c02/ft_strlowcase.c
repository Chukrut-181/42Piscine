/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:46:19 by igchurru          #+#    #+#             */
/*   Updated: 2024/03/03 11:00:42 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*or_str;

	or_str = str;
	while (*str != '\0')
	{
		if ('A' <= *str && *str <= 'Z')
			*str = *str + 32;
		str++;
	}
	return (or_str);
}

/*int	main(void)
{
	char	*mod_str;
	char	dest_str[35] = "HAY QUE BAJAR ESTAS MAYUSCULAS.";

	mod_str = ft_strlowcase(dest_str);
	printf ("La cadena en minúsculas es: %s.", mod_str);
	return (0);
}
*/