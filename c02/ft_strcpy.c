/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:21:13 by igchurru          #+#    #+#             */
/*   Updated: 2024/03/06 17:31:25 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*orig_dest;

	orig_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (orig_dest);
}

int	main(void)
{
	char 	*mod_str;
	char	dest_str[30] = "abcdefghijklmnopqrstuvwxyz";

	mod_str = ft_strcpy(dest_str, "1234XaX89");
	printf ("La cadena sobreescrita y truncada es %s.", mod_str);
	return (0);
}
