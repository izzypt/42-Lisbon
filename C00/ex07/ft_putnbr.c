#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_putnbr(int nb)
{
	char decima = nb/10;
	char unidade = nb%10;

	ft_putchar(decima+48);
	ft_putchar(unidade+48);
}


int main()
{
	ft_putnbr(56);
	return 0;
}
