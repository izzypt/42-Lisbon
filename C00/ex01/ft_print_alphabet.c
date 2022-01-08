#include <unistd.h>

void ft_print_alphabet(void)
{

	char c = 'a';
	char new_line = '\n';

	while (c <= 'z')
	{
		write(1, &c,1);
		c++;
	}
	write(1,&new_line,1);
}

int	main()
{
	ft_print_alphabet();
	return 0;
}
