/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:17:58 by igchurru          #+#    #+#             */
/*   Updated: 2024/03/05 19:45:48 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*mark;
	char	*needle;

	needle = to_find;
	mark = str;
	if (*to_find == '\0')
		return (mark);
	while (*str != '\0')
	{
		str = mark;
		to_find = needle;
		while (*str == *to_find)
		{
			str++;
			to_find++;
			if (*to_find == '\0')
				return (mark);
		}
		mark++;
	}
	return (0);
}

/*int	main(void)
{
	char	*found;
	char	haystack[90] = "1234567890AAtrewqtrewqBIIJ
	JKKLLMOPPQQRRSSQWERTYTTUUVVWW3C4D5E6F7G8H9Itrewq";

	found = ft_strstr(haystack, "trewq");
	printf("La aguja en el pajar es: %s.", found);
	return (0);
}
*/