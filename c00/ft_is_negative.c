#include <unistd.h>
// Incluye la biblioteca unistd.h para la función write

void	ft_is_negative(int n)
// Función para verificar si un número es negativo o no
{
	if (n >= 0)
	// Si el número es mayor o igual a 0...
		write(1, "P", 1);
		// Imprime 'P'
	else
	// En cualquier otro caso...
		write(1, "N", 1);
		// Imprime 'N'
}

int	main(void)
{
	ft_is_negative(5);
	// Llamada a ft_is_negative con un argumento tipo int.
	return (0);
	// Retorna 0 para indicar una ejecución exitosa.
}
