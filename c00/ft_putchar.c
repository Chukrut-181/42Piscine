#include <unistd.h>			// Incluye la biblioteca de encabezados para las funciones de E/S (entrada/salida) de bajo nivel como `write`.			

void	ft_putchar(char c)	// Esta función escribe un carácter 'c' en la salida estándar usando `write`.
{							// El primer argumento de `write` es el descriptor de archivo 1, que representa la salida estándar.
	write(1, &c, 1);		// El segundo argumento es la dirección del carácter a escribir.
}							// El tercer argumento es el número de bytes a escribir, que es 1 en este caso.

int	main(void)
{
	ft_putchar('W');		// Llama a `ft_putchar` para escribir el carácter 'W' en la salida estándar.
	return (0);				// Retorna 0 para indicar que el programa ha finalizado correctamente.
}
