#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char	c;
	char	o;

	c = 'i';
	o = '\n'; 
	ft_putchar(c);
	ft_putchar(o);
}
