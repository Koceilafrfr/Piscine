#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	ffrechi;

	ffrechi = 0;
	while(ffrechi <= n)
	{
		dest[ffrechi] = src[ffrechi];
		ffrechi++;
	}
	dest[ffrechi] = '\0';
	return(dest);
}

int	main(void)
{
	char		src[] = "temane";
	char		dest[] = "legrosfiakdemiqdad";
	unsigned int	n;

	n = 0;
	ft_strncpy(dest, src, n);
	printf("affiche tout de suite tu sais déjà c'est quooou iooiuoi : %s\n", dest);
	strncpy(dest, src, n);
	printf("fonction : %s\n", dest);
	return(0);
}
