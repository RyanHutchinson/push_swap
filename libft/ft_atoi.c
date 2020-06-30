/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 01:49:11 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/28 02:11:51 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_atoi(const char *s)
{
	int	i;
	int	n;
	int	sign;

	i = 0;
	n = 0;
	sign = 1;
	while (ft_isspace(*(s + i)))
		i++;
	if (*(s + i) == '-')
	{
		sign = -1;
		i++;
	}
	else if (*(s + i) == '+')
	{
		i++;
	}
	while (*(s + i) && ft_isdigit(*(s + i)))
	{
		n = n * 10 + *(s + i) - '0';
		i++;
	}
	n = n * sign;
	return (n);
}