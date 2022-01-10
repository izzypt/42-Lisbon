#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a,int *b)
{
	int container;
	int mod;

	container = *a / *b;
	mod = *a % *b;

	*a = container;
	*b = mod;
}

int	main()
{
	int *ptr1,*ptr2;
	int x = 50;
	int y = 10;

	ptr1 = &x;
	ptr2 = &y;


	ft_ultimate_div_mod(ptr1,ptr2);
	printf("x : %d\ny : %d\n", x , y);
	return 0;
}
