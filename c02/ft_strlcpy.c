/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 12:13:37 by igchurru          #+#    #+#             */
/*   Updated: 2024/03/03 11:19:24 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	while ((src[i] != '\0') && (1 < size))
	{
		dest[i] = src[i];
		i++;
		size--;
	}
	dest[i] = '\0';
	return (i);
}
