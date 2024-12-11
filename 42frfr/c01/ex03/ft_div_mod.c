#include <unistd.h>
#include <stdio.h>
void	ft_div_mode(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main()
{
	int	a;
	int	b;
	int	mod;
	int	div;

	a = 10;
	b = 3;
	ft_div_mode(a, b, &div, &mod);
	printf("résultat : %d\n", div);
	printf("reste : %d\n", mod);
}*/
