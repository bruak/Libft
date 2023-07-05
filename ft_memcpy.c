
#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    unsigned char *dest;
    const unsigned char *sour;

    dest = dst;
    sour = src;

    i = 0;
    if (!dest && !sour)
        return 0;

    while (i < n)
    {
        dest[i] = sour[i];
        i++;
    }
    return dest;
}