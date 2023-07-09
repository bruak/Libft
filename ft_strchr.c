/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoykan <bsoykan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:38:55 by bsoykan           #+#    #+#             */
/*   Updated: 2023/07/09 14:38:55 by bsoykan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strchr(const char *str, int c) 
{
	int i = 0;
	while (str[i]) 
	{
		if (str[i] == c)
			return (char *) (str + i);
		i++;
	}
	if (c)
		return NULL;
	return (char *) (str + i);
}