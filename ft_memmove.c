/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoykan <bsoykan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:38:03 by bsoykan           #+#    #+#             */
/*   Updated: 2023/07/09 14:38:03 by bsoykan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	if (dst < src)
		ft_memcpy(dst, src, n);
	else if (dst > src)
	{
		while (n > 0)
        {
    	    n--;
    	    unsigned char *tempdst = (unsigned char *)dst + n;
    	    const unsigned char *tempsour = (const unsigned char *)src + n;
    	    *tempdst = *tempsour;
        }

	}
	return (dst);
}