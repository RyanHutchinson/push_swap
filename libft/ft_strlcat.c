/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 14:06:40 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/10 17:05:13 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;
	int		k;
	size_t	len;

	i = 0;
	j = 0;
	len = ft_strlen(s1);
	k = (int)n - (int)len - 1;
	if (n < len)
		return (ft_strlen(s2) + n);
	while (*(s1 + i))
		i++;
	while (*(s2 + j) && k > 0)
	{
		*(s1 + i) = *(s2 + j);
		i++;
		j++;
		k--;
	}
	if (n != 0 && len <= n)
		*(s1 + i) = '\0';
	return (len + ft_strlen(s2));
}
