/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 19:58:19 by igchurru          #+#    #+#             */
/*   Updated: 2024/03/05 15:33:19 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int		i;

	i = 0;
	while (*dest)
	{
		dest++;
		size--;
		i++;
	}
	while (*src && 1 < size)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
		i++;
	}
	*dest = '\0';
	return (i);
}
