/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoykan <bsoykan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:38:03 by bsoykan           #+#    #+#             */
/*   Updated: 2023/07/10 15:00:52 by bsoykan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	copy(int start, int end, char *dst, const char *src)
{
	int	i;
	int	incr;

	if (start == 0)
		incr = 1;
	else
		incr = -1;
	i = start;
	while (i != end)
	{
		dst[i] = src[i];
		i += incr;
	}
}

void	directional_cpy(int forward, int len, char *dst, const char *src)
{
	if (forward)
		copy(0, len + 1, dst, src);
	else
		copy(len, -1, dst, src);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*source;

	if (!dst && !src)
		return ((void *) dst);
	dest = dst;
	source = src;
	directional_cpy(dest < source, (int) len - 1, dest, source);
	return (dst);
}
