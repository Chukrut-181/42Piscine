/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:17:03 by igchurru          #+#    #+#             */
/*   Updated: 2024/03/03 12:56:22 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char				*hex_str;
	unsigned int		hex1;
	unsigned int		hex2;

	hex_str = "0123456789abcdef";
	while (*str != '\0')
	{
		if ((*str < 32) || (*str == 127))
		{
			write (1, "\\", 1);
			hex1 = (*str / 16);
			write(1, &hex_str[hex1], 1);
			hex2 = (*str % 16);
			write(1, &hex_str[hex2], 1);
		}
		else
			write (1, str, 1);
		str++;
	}
}

/*int	main(void)
{
	char	dest_str[30] = "Co\ruc	ou\ntu vas bi\ten ?";

	ft_putstr_non_printable(dest_str);
	return (0);
}
*/