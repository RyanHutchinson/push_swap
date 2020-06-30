/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:36:32 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/06 17:31:26 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char	*dst;
	unsigned char	*src;
	size_t			i;

	if (s1 == NULL && s2 == NULL)
		return (s1);
	dst = (unsigned char *)s1;
	src = (unsigned char *)s2;
	if (s2 < s1)
	{
		i = n;
		while (i-- > 0)
			dst[i] = src[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dst[i] = src[i];
			i++;
		}
	}
	return (s1);
}
