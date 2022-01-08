
#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}



void	main()
{
	char a = 'Z';
	ft_putchar(a);
}
