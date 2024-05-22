#include <stdio.h>
// Incluimos la biblioteca estándar de entrada/salida
void	ft_ft(int *p)
// Definimos ft_ft que toma un puntero a un entero (int *p) como parámetro
{
	*p = 42;
	// Asignamos el valor 42 al entero al que apunta el puntero p
}

int	main(void)
{
	int	n;

	n = 0;
	// Declaramos una variable entera n y la iniciamos a 0
	ft_ft(&n);
	// Llamamos a la función ft_ft pasando la dirección de la variable n
	printf ("%d\n", n);
	// Imprimimos n para comprobar que su valor ha cambiado de 0 a 42
	return (0);
}
