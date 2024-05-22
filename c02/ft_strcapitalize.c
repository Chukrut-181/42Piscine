/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:50:49 by igchurru          #+#    #+#             */
/*   Updated: 2024/03/03 11:07:35 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	char	*orig_str;
	int		i;

	orig_str = str;
	if (('a' <= str[0] && str[0] <= 'z'))
		str[0] = str[0] - 32;
	i = 1;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if (('a' <= str[i]) && (str[i] <= 'z'))
		{
			if ((str[i - 1] < 48) || (122 < str[i -1]))
				str[i] = str[i] - 32;
			if ((57 < str[i - 1]) && (str[i -1] < 65))
				str[i] = str[i] - 32;
			if ((90 < str[i - 1]) && (str[i -1] < 97))
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (orig_str);
}

/*int	main(void)
{
	char	*mod_str;
	char	dest_str[100] = "salut, comment tu vas ?
	42mots quarante-deux; cinquante+et+un {}aaBB hg?df +hey h+hey";

	mod_str = ft_strcapitalize(dest_str);
	printf ("La cadena capitalizada es: %s.", mod_str);
	return (0);
}
*/