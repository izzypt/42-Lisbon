#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int array2[size];
	int i = 0;
	int j = size -1;

	while ( i < size)
	{
		array2[i] = tab[j];
		i++;
		j--;
	}

	i = 0;
	while(i < size)
	{

		tab[i] = array2[i];
		i++;
	}
}

int	main()
{
	int array[] = {1,2,3,4,5};
	int *ptr = &array[0];

	ft_rev_int_tab(ptr,5);
	return 0;
}
