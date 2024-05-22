#include <unistd.h>

void	ft_putnbr(int nb)					//El parámetro de la llamada se almacena en "nb".
{
	char	array[10];						//Declaración de un array de chars de 10 posiciones (de la 0 a la 9),
	int		p;

	p = 0;
	if (nb == -2147483648)					//Caso especial: Extremo mínimo.
		write (1, "-2147483648", 11);
	if (-2147483648 < nb && nb < 0)			//Si nb es negativo pero no el extremo mínimo...
	{
		write (1, "-", 1);					// ..se imprime el signo "-"...
		nb = (nb * (-1));					// ..y se multiplica por -1 para convertirlo en positivo.
	}
	if (nb == 0)							//Si nb es exactamente 0, se imprime "0".
		write (1, "0", 1);
	while (nb > 0)							//Caso general. Si nb es positivo...
	{
		p++;								//Con las iteraciones de p se controla cuál elemento del array se llenará.
		array[10 - p] = ('0' + (nb % 10));	// ..el array se va llenado desde abajo...
		nb = (nb / 10);						// ..y se elimina el último dígito de nb.
	}
	write(1, &array[10 - p], p);			//Finalmente se imprime el array desde la primera posición llena.
}

int	main(void)
{
	ft_putnbr(2147483647);					//Llamada a ft_putnbr con un argumento int (entre -2147483648 y 2147483647)
	return (0);
}
