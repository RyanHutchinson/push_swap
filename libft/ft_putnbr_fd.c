/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:46:28 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/10 16:10:05 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;
	char			digit;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	num = n;
	if (num >= 10)
		ft_putnbr_fd((num / 10), fd);
	digit = (num % 10) + '0';
	ft_putchar_fd(digit, fd);
}
