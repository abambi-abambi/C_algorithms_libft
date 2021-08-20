/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 14:13:39 by abambi            #+#    #+#             */
/*   Updated: 2020/11/22 18:16:15 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *to, const void *from, size_t count)
{
	unsigned char *t;
	unsigned char *f;

	if (to == from)
		return (to);
	t = (unsigned char *)to;
	f = (unsigned char *)from;
	if (t < f)
		while (count--)
			*t++ = *f++;
	else
	{
		t += count;
		f += count;
		while (count--)
			*--t = *--f;
	}
	return (to);
}
