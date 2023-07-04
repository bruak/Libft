#include "libft.h"


// Integer to ASCII
static int ft_numlen(int num)
//bu fonksiyonda girilen nbr değerinin basamak sayısı alınır.
{
    int i;

    if (num == 0)
        return (1);
    i = 0;
    while (num != 0)
    {
        num /= 10;
        i++;
    }
    return (i);
}

char *ft_itoa(int n)
{
    int len;
    char *dizi;
    long nbr;

    nbr = n;
    len = ft_numlen(nbr);
    // gririlen değerin basamak sayısı alınr len değerine kaydedilir
    if (n < 0)
    {
        len++;
        nbr = -nbr;
    }
    dizi = malloc(sizeof(char) * (len + 1)); // dizi boyutunu hesaplar, basamak değeri kadar yer ayırır.
    if (!dizi)
        return (NULL);
    dizi[len] = '\0';//en sonuna null koyar
    while (nbr > 0)
    {
        dizi[--len] = nbr % 10 + '0'; 
        // 123^ün mdunu alarak bölüp parçalayarak char değerine çevirir
        nbr /= 10;
        // basamak kaydırıp sağdan sola doğru gder,
    }
    if (n < 0)
        dizi[0] = '-';
    else if (n == 0)
        dizi[0] = '0';
    return (dizi);
}
// gcc -o a .\ft_itoa.c .\testmain.c 
/*
int main()
{
    int num = 123;
    char *str = ft_itoa(num);

    printf("Number: %d\n", num);
    printf("String: %s\n", str);

    free(str);

    return 0;
}
*/