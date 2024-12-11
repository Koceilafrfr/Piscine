#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}

int	main()
{
	int	a;
	char	*str;

	str = "yanis";
	a = ft_strlen(str);
	printf("%d", a);
}
