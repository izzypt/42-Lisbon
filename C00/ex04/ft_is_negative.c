#include <unistd.h>
#include <stdio.h>

void	ft_is_negative(int n)
{

	char negative = 'N';
	char positive = 'P';
	char nl = '\n';

	if(n < 0)
	{
		write(1,&negative,1);
		write(1,&nl,1);
	}
	else
	{
		write(1,&positive,1);
		write(1,&nl,1);
	}

}
int	main()
{
	ft_is_negative(-2);
	return 0;
}
