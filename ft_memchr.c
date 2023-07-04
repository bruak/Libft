#include "libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*buffer;

	buffer = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*buffer == (unsigned char)c)
			return (buffer);
		buffer++;
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char str[] = "Hello, world!";
	char ch = 'o';

	// Bellek bloğunda 'o' karakterini arayalım
	char *result = ft_memchr(str, ch, sizeof(str));

	if (result != NULL)
		printf("'%c' karakteri bulundu: %s\n", ch, result);
	else
		printf("'%c' karakteri bulunamadi\n", ch);

	return 0;
}*/