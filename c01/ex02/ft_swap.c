#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int	main()
{
	int	a;
	int	b;		
	a = 42;
	b = 24;
	printf("%d\n %d\n", a, b);
	ft_swap(&a, &b);
	printf("%d\n %d\n ", a, b);	
}*/
