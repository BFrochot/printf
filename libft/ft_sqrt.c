/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfrochot <bfrochot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 07:21:58 by bfrochot          #+#    #+#             */
/*   Updated: 2016/11/09 10:21:21 by bfrochot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb == 1)
		return (1);
	while (i * i != nb)
		i++;
	if (i * i > nb)
		return (0);
	else
		return (i);
}
