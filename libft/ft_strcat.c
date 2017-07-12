/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfrochot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:14:28 by bfrochot          #+#    #+#             */
/*   Updated: 2016/11/03 18:08:26 by bfrochot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int j;
	int k;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	k = 0;
	while (k <= j)
	{
		s1[i + k] = s2[k];
		k++;
	}
	return (s1);
}
