/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:52:09 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/06 17:31:54 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memchr(const void *s, int n, size_t i)
{
	int				j;
	unsigned char	*z;

	j = 0;
	z = (unsigned char *)s;
	while (i > 0)
	{
		if (*(z + j) == (unsigned char)n)
			return ((unsigned char *)(s + j));
		j++;
		i--;
	}
	return (NULL);
}
