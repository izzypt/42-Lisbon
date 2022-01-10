#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str)
{
	int i;

	i = 0;

	while (str[i] !='\0')
	{
		write(1,&str[i],1);
		i++;
	}
}

int	main()
{
	char nome[] = "Matilde";

	char *ptr = &nome[0];

	ft_putstr(ptr);

}
