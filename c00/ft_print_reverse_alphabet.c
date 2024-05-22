#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letra;

	letra = 'z';
	while (letra >= 'a')					//Vease ft_print_alphabet.c.
	{
		write (1, &letra, 1);
		letra--;							
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return(0);
}
