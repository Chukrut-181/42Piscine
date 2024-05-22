/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:03:44 by igchurru          #+#    #+#             */
/*   Updated: 2024/03/03 10:18:20 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char				*orig_dest;

	orig_dest = dest;
	while (*src && 0 < n)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (0 < n)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (orig_dest);
}

/*int	main(void)
{
	char 	*mod_str;
	char	dest_str[30] = "abcdefghijklmnopqrstuvwxyz";
	char	src_str[12] = "123456789";

	mod_str = ft_strncpy(dest_str, src_str, 12);
	printf ("La cadena sobreescrita y machacada es %s.", mod_str);
	return (0);
}
*/