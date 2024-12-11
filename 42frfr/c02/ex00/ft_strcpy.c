#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	ffrechi;

	ffrechi = 0;
	while(src[ffrechi]  != '\0')
	{
		dest[ffrechi] = src[ffrechi];
		ffrechi++;
	}
	dest[ffrechi] = '\0';
	return(dest);
	//src[] = "bonjour";
	//src[0]= 'l';
	
}

int	main(void)
{
	char	src[] = "temane";
	char	dest[] = "legrosfiakamiqdad";
	
	ft_strcpy(dest, src);
	printf("affiche dest : %s\n", dest);
	return(0);	
}
