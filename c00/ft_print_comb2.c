#include <unistd.h>

void	ft_print_comb2(void)
{
	int		x;
	int		y;
	char	buffer[5];						//Declaración de un array(string) de 5 elementos tipo char (del 0 al 4).

	x = 0;									//X contrendrá un int entre 0 y 99.
	buffer[2] = (' ');						//Este elemento no cambiará. Lo inicio fuera de los bucles.
	while (x < 99)							//Bucle exterior. Mientras x sea menor que 99.
	{
		y = (x + 1);						//Y contrendrá un int entre 0 y 99.
		while (y <= 99)						//Bucle interior. Mientras y sea menor o igual que 99.
		{
			buffer[0] = ((x / 10) + '0');	//Asignación de valor a los elementos. Suma +'0' para obtener un valor tipo char.
			buffer[1] = ((x % 10) + '0');	//Con la división sacamos la decena y con el módulo la unidad...
			buffer[3] = ((y / 10) + '0');	//... y se almacenan en sus elementos correspondientes.
			buffer[4] = ((y % 10) + '0');
			write(1, &buffer, 5);			//Finalmente mostramos el array completo...
			if (x != 98)					//... y si x no es 98 (sólo es 98 en el último caso) añadimos una coma y un espacio.
				write (1, ", ", 2);
			y++;
		}
		x++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
