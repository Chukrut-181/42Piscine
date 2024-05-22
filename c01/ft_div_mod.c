#include <stdio.h>
// Incluye la biblioteca stdio.h para usar la función printf para imprimir resultados.

void	ft_div_mod(int a, int b, int *div, int *mod)
// Define una función que toma dos enteros (a y b) y dos punteros a enteros (div y mod). 
// La función calcula la división entera de x entre y y su resto (módulo).
{
	*div = (a / b);
	// Calcula la división entera de a entre b y almacena el resultado en la dirección de memoria a la que apunta div.
	*mod = (a % b);										
	// Calcula el resto de a entre b y almacena el resultado en la dirección de memoria a la que apunta mod.
}

int	main(void)
{
	int	x;
	int	y;
	int	d;
	int	m;

	x = 25;
	y = 8;
	d = 0;
	m = 0;
	ft_div_mod(x, y, &d, &m);
	// Llama a la función ft_div_mod pasando x, y, y las direcciones de memoria de d y m.
	printf ("La division es %d\n", d);
	printf ("El resto es %d\n", m);
	return (0);
}
