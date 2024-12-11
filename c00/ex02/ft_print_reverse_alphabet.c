#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	f;

	f = 122;
	while (f >= 97)
	{
		write(1, &f, 1);
		f--;
	}
}

int	main(void)
{
	char	u;

	u = '\n';
	ft_print_reverse_alphabet();
	write(1, &u, 1); 
}
