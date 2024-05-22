/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 17:51:17 by igchurru          #+#    #+#             */
/*   Updated: 2024/03/04 17:20:57 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*orig_dest;

	orig_dest = dest;
	while (*dest)
		dest++;
	while ((*src) && (0 < nb))
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	return (orig_dest);
}

/*int	main(void)
{
	char	orig[30] = "ABCDE";
	char	*mod_str;

	mod_str = ft_strncat(orig, "123456789", 8);
	printf ("El string concatenado es %s.", mod_str);
	return (0);
}
*/