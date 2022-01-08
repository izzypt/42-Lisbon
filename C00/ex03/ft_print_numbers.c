#include <unistd.h>

void ft_print_numbers(void)
{
	char c = 48;
	char nl = '\n';
	while( c <= 57)
	{
		write(1,&c,1);
		c++;
	}
		write(1,&nl,1);
}

int main()
{
	ft_print_numbers();
	return 0;
}
