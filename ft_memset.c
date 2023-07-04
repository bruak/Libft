/* void s = girilen data **** int c = girilen data yerine yazılıp değiştirilecek değer ***********
 size_t = byte'ın sayısını tutar, girilen data üzerinde kaç byte değiştirileceğini tutar değer değiştirilmek istendiğini belirler*/
// byte yerine byte yazmak, özetle
#include "libft.h"
// Fonksiyonda c ile gönderilen değişkeni len uzunluğu kadar b karakterine kopyalar
void *ft_memset(void *s, int c, size_t n) //pointer döndürdüğü için * fonksiyonun başında olması zorunludur.
{
    size_t         i;              // İşlem yapılacak byte'ın indeksini tutmak için kullanılacak değişken
    unsigned char  *ptr;           // Bellek bloğunu temsil etmek için unsigned char işaretçisi

    i = 0;                         // İndeks değerini sıfırla
    ptr = (unsigned char *)s;      // İşlem yapılacak bellek bloğunun başlangıcını gösteren bir işaretçi oluştur
    while (i < n) {                // İndeks, istenen byte sayısından küçük olduğu sürece döngüyü çalıştır
        ptr[i++] = c;  // İşaretçinin gösterdiği bellek bloğunda, indeksteki byte'ı c değeriyle değiştir
    }
    return s;                      // İşlem yapılan bellek bloğunun başlangıcını temsil eden işaretçiyi döndür
}

//unsigned char kullanılmasının temel sebebi byte üzerinde 
// işlem yapılabilmesi.
