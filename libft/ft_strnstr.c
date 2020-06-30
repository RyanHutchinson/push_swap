/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 17:40:48 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/06 17:37:39 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!*s2)
		return ((char *)s1);
	while (*(s1 + i) && i < (int)n)
	{
		while ((*(s1 + i + j) == *(s2 + j)) && i + j < (int)n)
		{
			j++;
			if (!*(s2 + j))
				return ((char *)(s1 + i));
		}
		i++;
		j = 0;
	}
	return (NULL);
}
