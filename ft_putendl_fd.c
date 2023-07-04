// yeni satıra geçen biraderc
// ft_putendl_fd fonksiyonu, ft_putstr_fd fonksiyonunu kullanarak bir karakter dizisini verilen dosya tanıtıcısına (fd) yazdırır ve ardından bir satır sonu karakteri ('\n') ekler. 
#include "libft.h"
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

