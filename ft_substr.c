/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:13:39 by abambi            #+#    #+#             */
/*   Updated: 2020/11/23 20:32:36 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	size_t			len_s;
	unsigned int	i;

	if (!s)
		return (NULL);
	if (!(ptr = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	len_s = 0;
	i = 0;
	while (s[len_s] != '\0')
		len_s++;
	while (s && start < len_s && len--)
		ptr[i++] = s[start++];
	ptr[i] = '\0';
	return ((char *)ptr);
}
