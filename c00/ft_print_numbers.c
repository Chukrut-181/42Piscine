#include <unistd.h>

void	ft_print_numbers(void)
{
	char	numero;

	numero = '0';
	while (numero <= '9')			//Véase ft_print_alphabet.c
	{
		write(1, &numero, 1);
		numero++;
	}
}

int	main()
{
	ft_print_numbers();
	return (0);
}
