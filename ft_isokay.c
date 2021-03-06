/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isokay.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfrochot <bfrochot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 20:30:42 by bfrochot          #+#    #+#             */
/*   Updated: 2016/12/09 22:31:35 by bfrochot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		ft_isokay(char c)
{
	if (c == 'z' || c == 'h' || c == 'l' || c == '+' || c == '-' || c == '#'
		|| c == ' ' || c == '*' || c == '.' || c == 'j' || ft_isdigit(c))
		return (1);
	return (0);
}

int		ft_fuckit(char c)
{
	if (c == 'o' || c == 'O' || c == 'x' || c == 'X' || c == 'p'
		|| c == 'd' || c == 'D' || c == 'i' || c == 'c' || c == 'C')
		return (1);
	return (0);
}
