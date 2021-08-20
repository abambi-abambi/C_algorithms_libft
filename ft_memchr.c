/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 14:13:39 by abambi            #+#    #+#             */
/*   Updated: 2020/11/22 18:19:09 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int val, size_t num)
{
	unsigned char *ptr;

	ptr = (unsigned char *)str;
	while (num--)
	{
		if (*ptr == (unsigned char)val)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
