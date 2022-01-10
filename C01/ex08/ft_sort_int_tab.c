#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{

	int i = 0;
	int j = 0;
	int a;

	while ( i < size)
	{
		while ( j < size)
		{
			if (tab[i] > tab[j])
			{
				a = tab[i];
				tab[i] = tab[j];
				tab[j] = a;
			}
			j++;
		}
		printf("%d", tab[i]);
		i++;
		j = i;
	}
}

int	main()
{
	int array[] = {3,2,1,4,5};
	int *ptr = &array[0];

	ft_sort_int_tab(ptr,5);

}
