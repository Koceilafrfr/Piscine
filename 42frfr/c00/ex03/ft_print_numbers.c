#include <unistd.h>

void	ft_print_numbers(void)
{
	char	y;
	char	e;

	y = 48;
	e = '\n';
	while (y <= 57)
	{
		write(1, &y, 1);
		y++;
	}
	write(1, &e, 1);
}

int	main(void)
{
	ft_print_numbers();
}











/*
VRAI SOLUCE1
void ft_print_numbers(void)
{
	write(1, "0123456789", 10)
}
VRAI SOLUCE2
void ft_print_numbers(void)
{
	char	y;
	
	y = 48;
	while (y <= 57)
	{
		write(1, &y, 1);
		y++;
	}	
}*/
