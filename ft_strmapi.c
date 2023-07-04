#include "libft.h"
//'f' işlevini, 's' dizisinin her karakterine uygular
//f = farklı ir fonksiyon.
// farklı bir fonksiynu strmapi fonksiyonun içine s değeriyle beraber göndeririz
// gönderilen bu değer yeni bir alan hesaplanarak str ye kaydedilir
//
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	i = 0;
	str = (char *) ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
#include <stdlib.h>

void    ft_bzero(void *s, size_t n)
{
    char    *clean;

    clean = s;
    while (n != 0)
    {
        *clean++ = 0;
        n--;
    }
}

size_t ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	result = malloc(count * size);
	if (result == NULL)
		return (NULL);
	ft_bzero(result, count * size); //sitenilen yer kadar alanı sıfır ile doldur
	return (result);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	i = 0;
	str = (char *) ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
// HARFLERİ BÜÜYTMEK İÇİN ÖRNEK

char uppercase(unsigned int index, char c)
{
    if (c >= 'a' && c <= 'z') {
        // Küçük harfi büyük harfe çevir
        return c - 'a' + 'A';
    }
    return c;
}

int main()
{
    char *str = "Hello, world!";
    
    char *result = ft_strmapi(str, uppercase);
    
    printf("Original string: %s\n", str);
    printf("Mapped string: %s\n", result);
    
    free(result);
    
    return 0;
}
// STR DEĞERİNDEKİ HARFLERİ ÇİFTLEMEK İÇİN ÖRNEK KULLANIM

char doubleChar(unsigned int index, char c)
{
    return c * 2;
}

int main()
{
    char *s = "Hello";
    char *result = ft_strmapi(s, doubleChar);
    printf("Result: %s\n", result);
    free(result);
    return 0;
}

*/