#include <unistd.h>

void	ft_print_comb(void)
{
	char	i;							//Declaración de tres variables diferentes tipo char.
	char	j;
	char	k;

	i = '0';							//Inicialización de i con valor 0.
	while (i <= '7')					//Bucle exterior. Mientras i sea menor o igual que 7...
	{
		j = (i + 1);					//Inicialización de j con valor (i + 1).
		while (j <= '8')				//Bucle medio. Mientras j sea menor o igual que 8...
		{
			k = (j + 1);				//Inicialización de k con valor (j + 1).
			while (k <= '9')			//Bucle interior. Mientras k sea menor o igual que 9...
			{
				write (1, &i, 1);		//Imprimir ijk.
				write (1, &j, 1);
				write (1, &k, 1);
				if (i != '7')			//Si i no es 7 (sólo en el último caso es 7, si lo piensas)...
					write (1, ", ", 2);	// .. imprimir coma y espacio.
				k++;					//Incrementar k para continuar con la siguiente combinación.
			}
			j++;						//Incrementar j para continuar con la siguiente combinación.
		}
		i++;							//Incrementar i para continuar con la siguiente combinación.
	}
}

int	main(void)
{
	ft_print_comb();					//Llamada a función sin parámetros.
	return (0);
}
