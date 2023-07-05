//ft_memcmp fonksiyonu, bellekteki iki bellek bloğunu (s1 ve s2) n kadar byte boyunca karşılaştırır.
// Karşılaştırma, bellek bloklarının değerlerini byte-byte kontrol eder ve ilk farklı byte'ı bulur.
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*buffer1;
	unsigned char	*buffer2;

	buffer1 = (unsigned char *)s1;
	buffer2 = (unsigned char *)s2;
	
	i = 0;
	if (n == 0)
		return (0);
	
	while (buffer1[i] == buffer2[i] && i < n - 1)
		i++;
	return (buffer1[i] - buffer2[i]);
}