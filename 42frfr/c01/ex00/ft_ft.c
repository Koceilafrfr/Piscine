#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

void	main(void)
{
	int	u;
	int	*i;

	u = 1;
	i = &u; 
	ft_ft(i);
	printf("%d\n", u);
	printf("%d\n", *i);
}
