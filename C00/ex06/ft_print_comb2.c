#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_print_result(char a, char b, char c, char d)
{

	if ( a == '9' && b == '8' && c == '9' && d == '9')
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(' ');
		ft_putchar(c);
		ft_putchar(d);
	}
	else
	{
		ft_putchar(a);
                ft_putchar(b);
                ft_putchar(' ');
                ft_putchar(c);
                ft_putchar(d);
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void ft_print_comb2(void)
{
	char a = '0';
	char b = '0';
	char c = '0';
	char d = '0';


	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while(d <= '9')
				{
					d++;
					if (d <= '9')
						ft_print_result(a,b,c,d);
				}
				c++;
				d ='0';
				if ( c <= '9')
					ft_print_result(a,b,c,d);
			}
			b++;
			d = b+1;
			c = a;
			if(b <= '9' && d != ':')
				ft_print_result(a,b,c,d);
		}
		a++;
		b = '0';
		c = a;
		d = b+1;
		if ( a<= '9')
			ft_print_result(a,b,c,d);
	}
}

int main()
{
	ft_print_comb2();
	return 0;
}
