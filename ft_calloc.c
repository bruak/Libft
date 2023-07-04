#include "libft.h"
//Fonksiyon istenen belleği ayırır ve ona bir işaretçi döndürür. malloc ve calloc arasındaki fark,
//malloc'un belleği sıfıra ayarlamamasıdır, calloc ayrılan belleği sıfırlar.
void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	result = malloc(count * size);
	if (result == NULL)
		return (NULL);
	ft_bzero(result, count * size); //sitenilen yer kadar alanı sıfır ile doldur
	return (result);
}