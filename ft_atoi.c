/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 14:13:39 by abambi            #+#    #+#             */
/*   Updated: 2020/11/26 19:02:45 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int num;
	int sign;

	num = 0;
	sign = 1;
	while (*s == ' ' || *s == '\t' || *s ==
	'\n' || *s == '\v' || *s == '\r' || *s == '\f')
		s++;
	if (*s == '-')
		sign = -1;
	if (*s == '-' || *s == '+')
		s++;
	while (*s != '\0' && *s >= '0' && *s <= '9')
	{
		num = num * 10;
		num = num + *s - 48;
		s++;
	}
	return (num * sign);
}
