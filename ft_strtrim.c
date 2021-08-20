/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:13:39 by abambi            #+#    #+#             */
/*   Updated: 2020/11/10 18:12:45 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isequal(char c, const char *ch)
{
	while (*ch)
	{
		if (c == *ch)
			return (1);
		ch++;
	}
	return (0);
}

static char		*ft_nochars_in(void)
{
	char *ptr;

	if (!(ptr = malloc((1) * sizeof(char))))
		return (NULL);
	*ptr = '\0';
	return (ptr);
}

static char		*ft_fillarr(int len, const char *arr)
{
	int		i;
	char	*ptr;

	i = 0;
	if (!(ptr = malloc((len) * sizeof(char))))
		return (NULL);
	while (i++ < len - 1)
		*ptr++ = *arr++;
	*ptr = '\0';
	return (ptr - len + 1);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		beginindex;
	int		endindex;
	int		lensrc;
	int		lendst;

	if (!s1 || !set)
		return (NULL);
	beginindex = 0;
	lensrc = 0;
	while (s1[lensrc])
		lensrc++;
	endindex = lensrc - 1;
	while (s1[beginindex] && ft_isequal(s1[beginindex], set) == 1)
		beginindex++;
	if (s1[beginindex] == '\0')
		return (ft_nochars_in());
	while (ft_isequal(s1[endindex], set) == 1)
		endindex--;
	lendst = endindex - beginindex + 1 + 1;
	return (ft_fillarr(lendst, &s1[beginindex]));
}
