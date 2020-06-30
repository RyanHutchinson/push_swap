/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:44:06 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/10 16:43:57 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_putnbr(int n)
{
	unsigned int	num;
	char			digit;

	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	num = n;
	if (num >= 10)
		ft_putnbr(num / 10);
	digit = (num % 10) + '0';
	ft_putchar(digit);
}
