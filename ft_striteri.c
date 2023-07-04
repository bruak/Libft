// karakter dizisini doğrudan değiştirir.
// İşlem, karakterin ve indeksin işaret edildiği bir fonksiyon aracılığıyla yapılır.
#include "libft.h"
void    ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int i;

    if (s)
    {
        i = 0;
        while (s[i])
        {
            f(i, &s[i]);
            i++;
        }
    }
}
