/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 16:26:32 by igchurru          #+#    #+#             */
/*   Updated: 2024/03/05 15:26:37 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*orig_dest;

	orig_dest = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (orig_dest);
}

/*
int	main(void)
{
	char	orig[30] = "ABCDE";
	char	*mod_str;

	mod_str = ft_strcat(orig, "12345");
	printf ("El string concatenado es %s.", mod_str);
	return (0);
}
*/