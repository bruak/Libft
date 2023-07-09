/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoykan <bsoykan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:39:03 by bsoykan           #+#    #+#             */
/*   Updated: 2023/07/09 14:39:04 by bsoykan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n) 
{
	unsigned int i;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < n - 1) 
		i++;
	return (unsigned char)s1[i] - (unsigned char)s2[i];
}