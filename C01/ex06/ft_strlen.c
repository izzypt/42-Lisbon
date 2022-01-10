#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int counter;

	counter = 0;

	while ( str[counter] != '\0')
	{
		counter++;
	}

	char counter2 = counter +48;
	char nl = '\n';

	printf("Length : %d\n", counter);
	write(1,&counter2,1);
	write(1,&nl,1);
}

int	main()
{

	char string[] = "Amore mio";
	char *ptr = &string[0];

	ft_strlen(ptr);

}
