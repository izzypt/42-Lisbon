#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{

	char i = 'z';
	char nl = '\n';

	while( i >= 'a')
	{
		write(1,&i,1);
		i--;
	}
	write(1,&nl,1);
}

int main()
{
	ft_print_reverse_alphabet();
}
