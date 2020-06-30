/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:06:15 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/06 17:28:52 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memset(void *s, int n, size_t i)
{
	unsigned char	*c;
	size_t			j;

	j = 0;
	c = (unsigned char *)s;
	while (j < i)
		*(c + j++) = n;
	return (s);
}
