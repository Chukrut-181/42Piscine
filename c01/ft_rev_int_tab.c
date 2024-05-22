void	ft_rev_int_tab(int *tab, int size)
// Función para invertir un array de enteros
{
	int	a;
	// Índice para el principio del array
	int	z;
	// Índice para el final del array
	int	temp;
	// Variable temporal para el intercambio de elementos

	a = 0;
	z = size - 1;
	// Inicializa los índices a y z
	while (a < z)
	{
		temp = tab[a];
		// Guarda el valor de tab[a] en temp
		tab[a] = tab[z];
		// Asigna el valor de tab[z] a tab[a]
		tab[z] = temp;
		// Asigna el valor de temp a tab[z]
		a++;
		z--;
		// Avanza a y retrocede z para continuar con el siguiente intercambio
	}
}
