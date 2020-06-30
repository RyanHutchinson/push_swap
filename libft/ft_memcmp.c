/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:01:16 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/06 17:32:12 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				j;
	unsigned char	*z;
	unsigned char	*z2;

	j = 0;
	z = (unsigned char *)s1;
	z2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*(z + j) == *(z2 + j) && j < (int)sizeof(z) && j < (int)sizeof(z2)
			&& j < (int)n - 1)
		j++;
	return ((int)(*(z + j) - *(z2 + j)));
}
