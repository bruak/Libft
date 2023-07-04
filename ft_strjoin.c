#include "libft.h"
/*`ft_strjoin` fonksiyonu, iki karakter dizisini birleştirerek yeni bir karakter dizisi oluşturur. İlk olarak, `s1` ve `s2` parametrelerinin geçerli olup olmadığı kontrol edilir. Ardından, `s1` ve `s2` karakter dizilerinin uzunlukları toplanarak birleştirilecek dizinin toplam uzunluğu `len` olarak hesaplanır.
Birleştirilecek dizinin bellekte yer alabilmesi için gerekli alan `malloc` fonksiyonuyla ayrılır. Eğer bellek ayrılma işlemi başarısız olursa `NULL` döndürülür.
Son olarak, `ft_strlcpy` fonksiyonuyla `s1` karakter dizisi `str`'ye kopyalanır. `ft_strlcat` fonksiyonuyla da `s2` karakter dizisi `str`'nin sonuna eklenir.
Elde edilen birleştirilmiş karakter dizisi `str` geri döndürülür.*/


char	*ft_strjoin(char const *s1, const char *s2)
{
	char	*str;
	size_t	len;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	ft_strlcpy(str, s1, ft_strlen(s1) + 1);
	ft_strlcat(str, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (str);
}