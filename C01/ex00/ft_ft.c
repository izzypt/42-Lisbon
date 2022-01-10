#include <unistd.h>
#include <stdio.h>

void ft_ft(int *nbr)
{
	*nbr = 42;
	printf("%d\n", *nbr);
}

int main()
{
	int x = 3;
	int *ptr = &x;
	ft_ft(ptr);
}
