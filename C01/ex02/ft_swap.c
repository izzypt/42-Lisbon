#include <stdio.h>

void ft_swap(int *a, int *b)
{

	int container;

	container = *a;
	*a = *b;
	*b = container;
	printf("valor de a era 5 e agora é %d\nvalor de b era 10 e agora é %d\n", *a,*b);
}

int main()
{
	int z = 5;
	int y = 10;

	int *a = &z;
	int *b = &y;

	ft_swap(a,b);
	return 0;
}
