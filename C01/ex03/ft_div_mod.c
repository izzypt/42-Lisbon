#include <stdio.h>

void ft_div_mod(int a,int b,int *div,int *mod)
{


	*div = a/b;
	*mod = a%b;

	printf("valor de *div: %d \nvalor de *mod: %d\n", *div, *mod);
}

int	main()
{
	int division;
	int modulus;

	int *div = &division;
	int *mod = &modulus;

	ft_div_mod(50,10,div,mod);
	return 0;
}
