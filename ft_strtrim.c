#include "libft.h"
//To remove whitespace from the beginning and end of all lines
static int	ft_checkset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*m;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_checkset(s1[start], set)) 
    //set içindeki whitespace karakterlerini s1[start] den başlayarak kontrol eder.
    //whitespace karakterleri bulunca start değerini 1 arttırır.
    //whitespace karakterleri bulunmazsa start başlangıç değeri değişir.
		start++;
	while (end > start && ft_checkset(s1[end - 1], set))
    //set içindeki whitespace karakterlerini s1[end - 1] den sonra kontrol eder.
    //sondan başlayarak end değeri için yeniden bitiş değeri belirler.
    //whitespace karakterleri bulunca end değerini 1 azaltır.
		end--;
        //başının ve sonunun ayrı olarak kontrol edilmesinin sebebi ortasındaki değerlere dokunulmayacak olamsıdır.
	m = (char *)malloc(sizeof(char) * (end - start) + 1);
    //aradaki fark çıkarılarak ayırılacak alan hesaplanır.
	if (!m)
		return (NULL);
	i = 0;
	while (start < end)
		m[i++] = s1[start++];
        //white space olmayan alanlar ayrılan m alanına kopyalanır.
	m[i] = '\0';
	return (m);
}


// int main()
// {
//     char *str = "   Hello, world!   ";
//     char *set = " ";
//     char *trimmed_str = ft_strtrim(str, set);

//     printf("Original string: \"%s\"\n", str);
//     printf("Trimmed string: \"%s\"\n", trimmed_str);

//     free(trimmed_str); // Bellek sızıntısını önlemek için hafızayı serbest bırak

//     return 0;
// }

/*#include "libft.h"
// libft.h başlık dosyası dahil edildi.

static int	ft_checkset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i++] == c)
			return (1);
	}
	return (0);
}
// ft_checkset fonksiyonu, belirtilen karakterin set içinde olup olmadığını kontrol eder.

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*m;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	// İlk olarak, geçerli bir giriş olup olmadığını kontrol eder. NULL ise NULL döndürür.

	start = 0;
	end = ft_strlen(s1);
	// Başlangıç ve bitiş indekslerini başlangıçta tüm karakter dizisinin uzunluğuna ayarlar.

	while (s1[start] && ft_checkset(s1[start], set))
		start++;
	// Başlangıç indeksini, set içinde yer almayan ilk karaktere taşır.

	while (end > start && ft_checkset(s1[end - 1], set))
		end--;
	// Bitiş indeksini, set içinde yer almayan son karaktere taşır.

	m = (char *)malloc(sizeof(char) * (end - start) + 1);
	if (!m)
		return (NULL);
	// Kırpılmış karakter dizisi için bellek ayrılır.

	i = 0;
	while (start < end)
		m[i++] = s1[start++];
	// Başlangıçtan bitişe kadar olan karakterleri kopyalar.

	m[i] = '\0';
	// Sonuna NULL karakter ekler.

	return (m);
	// Kırpılmış karakter dizisini döndürür.
}

int main()
{
    char *str = "   Hello, world!   ";
    char *set = " ";
    // Başlangıçta boşluk karakterleri içeren bir dize ve kırpma seti belirtilir.

    char *trimmed_str = ft_strtrim(str, set);
    // ft_strtrim fonksiyonunu kullanarak kırpılmış karakter dizisini oluşturur.

    printf("Original string: \"%s\"\n", str);
    printf("Trimmed string: \"%s\"\n", trimmed_str);
    // Orijinal ve kırpılmış karakter dizilerini ekrana yazdırır.

    free(trimmed_str);
    // Bellek sızıntısını önlemek için kırpılmış karakter dizisinin hafızasını serbest bırakır.

    return 0;
}
*/