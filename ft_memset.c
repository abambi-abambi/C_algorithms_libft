/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 14:13:11 by abambi            #+#    #+#             */
/*   Updated: 2020/11/17 18:12:45 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	unsigned char ch;
	unsigned char *ptr;

	ch = (unsigned char)c;
	ptr = dest;
	while (len-- > 0)
	{
		*ptr = ch;
		ptr++;
	}
	return (dest);
}
