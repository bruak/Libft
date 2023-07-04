#include "libft.h"
//kaynak srcnin başlangıç adresini ve dest adresini parametre olarak alır ve src değerinden kaç byte kopyalanacağını parametre olarak alır
//memmove farkı ise örtüşmeleri engellemektir
void *ft_memmove(void *dst, const void *src, size_t len)
{
    const char *sorc;
    char *dest;

    sorc = src;
    dest = dst;

    size_t i;

	i = 0;
    if (!dest && !sorc)
        return dest;

    if (dest > sorc)
    {
        while (len > 0)
        {
            len--;
            dest[len] = sorc[len];
        }
    }
    else
    {
        char *temp = malloc(len);  // Yeni bir geçici bellek alanı ayrılıyor
        if (!temp)
            return dest;  // Bellek ayrılamazsa işlemi iptal et
        ft_memcpy(temp, sorc, len);  // Kaynak bloğu geçici bellek alanına kopyala
        ft_memcpy(dest, temp, len);  // Geçici bellek alanını hedef bloğa kopyala
        free(temp);  // Geçici bellek alanını serbest bırak
    }

    return dest;
}
