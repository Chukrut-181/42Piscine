#include <unistd.h>					// Incluye la biblioteca de encabezados para funciones como `write`.

void	ft_print_alphabet(void)
{
	char	letra;					// Declara una variable de tipo `char` llamada `letra`para almacenar el carácter a imprimir.

	letra = 'a';					// Inicializa `letra` con el valor 'a'.
	while (letra <= 'z')			// Este bucle `while` se ejecutará mientras `letra` sea menor o igual a 'z'.
	{
		write (1, &letra, 1);		// `write` se utiliza para escribir el carácter actual `letra` en la salida estándar.
		letra++;					// Incrementa `letra` en 1, para avanzar al siguiente carácter en el alfabeto.
	}
}

int	main(void)
{
	ft_print_alphabet();			// Llama a `ft_print_alphabet` sin argumentos.
	return (0);
}
