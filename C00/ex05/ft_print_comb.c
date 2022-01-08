#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_print_result(char x, char y, char z)
{
	write(1,&x,1);
	write(1,&y,1);
	write(1,&z,1);
	write(1,"\n",1);
}

void	ft_print_comb(void)
{
	int x = '0';
	int y = '0';
	int z = '0';

	while (x <= '7')
	{
		y = x+1;
		while(y < '8')
		{
			z = y + 1;
			while(z<'9')
			{
				ft_print_result(x,y,z);
				z++;
			}
			ft_print_result(x,y,z);
			y++;
		}
        	ft_print_result(x,y,z);
		x++;
	}
}

int	main()
{

	ft_print_comb();
}
