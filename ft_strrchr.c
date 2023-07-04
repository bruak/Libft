//Fonksiyonda s ile gönderilen dizinin içerisinde c ile gönderilen değişken değerini arar, c değerini en son bulduğu yerden sonrasını ekrana yazdırır.
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i)); //Örneğin, s işaretçisi 0x1000 bellek adresini gösteriyorsa ve i değeri 3 ise, ptr işaretçisi 0x1003 bellek adresini gösterecektir.
		i--;
	}
	if(c)
		return NULL;
	return ((char *) (s + 1));
}
