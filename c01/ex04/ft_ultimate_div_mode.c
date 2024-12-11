#include <unistd.h>
#include <stdio.h>
void	ft_ultimate_div_mode(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}

int	main()
{
	int	a;
	int	b;

	a = 10;
	b = 3;
	ft_ultimate_div_mode(&a, &b);
	printf("resultat %d\n", a);
	printf("reste %d\n", b);
}
