/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleclair <mleclair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 10:58:50 by exam              #+#    #+#             */
/*   Updated: 2016/11/28 18:21:38 by mleclair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_power(long long int value, int power)
{
	if (power == 0)
		return (1);
	while (power > 1)
		value *= value;
	return (value);
}

char	*ft_itoa_base(uintmax_t value, int base, int neg)
{
	long long int	i;
	uintmax_t		save;
	char			*str;
	char			*result;

	i = 0;
	if (value == 0)
		i++;
	save = value;
	while (value > 0 && ++i)
		value = value / base;
	str = "0123456789abcdef";
	if (!(result = malloc(i + neg + 1)))
		exit (0);
	result[i + neg] = '\0';
	result[0] = '-';
	while (i--)
	{
		result[i + neg] = str[save % base];
		save = save / base;
	}
	return (result); 
}
