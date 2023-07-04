#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*s;
	size_t	len;
	int		i;

	i = 0;
	len = ft_strlen(str);
	s = (char *)malloc(sizeof(char) * (len + 1));
    //1- s alınana bir pointer olduğu için adres belirtmek için kullanılır.(char *) dönüşümü, malloc fonksiyonunun döndürdüğü void * tipini char * tipine dönüştürür. 
    //2-Bu, bellek bloğunun karakterlerin tutulacağı bir dizi olarak kullanılacağını belirtir.
    //3-girilen değerden bir fazla değer kadar yer ayırır.
    //4-char kadar malloc ile. NEDEN char pointera dönüştürülür
	if (!s) //null değilse
		return (0);
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}