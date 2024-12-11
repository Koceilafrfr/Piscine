#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 122) || (str[i] >= 65 && str[i] <= 'Z')) 
		{
			i++;
		}
		else
		{
			return(0);
		}
	}
	return(1);
}

int	main(void)
{
	int	i;
	//int	n;
	char	str[] = "ALLOIcIzOLAskI";
	char	ing[] = "47701c1z074sk1";
	char	thomas[] = "";

	i = ft_str_is_alpha(str);
	printf("%d\n", ft_str_is_alpha(ing));
	printf("%d\n", ft_str_is_alpha(thomas));
	printf("affche le s : %d\n", i);
	return(0);
}
