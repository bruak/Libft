#include "libft.h"
// belirtilen bir karakter dizisini (s) bir dosya tanıtıcısına (fd) yazan bir yardımcı işlevdir.
void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}