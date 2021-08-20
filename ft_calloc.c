/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:13:39 by abambi            #+#    #+#             */
/*   Updated: 2020/11/22 19:19:50 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned int	i;
	unsigned int	memsize;
	unsigned char	*ptr;

	i = 0;
	memsize = count * size;
	ptr = malloc(memsize);
	if (!ptr)
		return (NULL);
	while (memsize--)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
