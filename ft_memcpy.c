
#include "libft.h"
// Fonksiyon src bellek alanını dst bellek alanına n değeri kadar kopyalar.
// restrict belirteci, bir işaretçinin işaret ettiği bellek bloğunun başka bir işaretçi veya aynı türdeki başka bir işaretçi tarafından değiştirilmeyeceğini garanti etmek için kullanılır.
#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    unsigned char *d;
    const unsigned char *s;

    d = dst;
    s = src;

    i = 0;
    if (!dst && !src)
        return 0;

    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return dst;
}
