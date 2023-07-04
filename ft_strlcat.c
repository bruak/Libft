#include "libft.h"
//gönderilen iiki diziyi birleştirir. (gönderilen 1. dizinin sonuna ekleme yaparak.)(sonuna ekleme yaparak)

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	
	if(size == '\0')
	{
		return (ft_strlen(src));
	}
	
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	
	if (!size)
		return (src_len);

	while (src[i] && dst_len + i < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	
	if (dst_len > size)
		return (src_len + size);
	
	return (src_len + dst_len);
}