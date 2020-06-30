/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 17:26:52 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/06 17:47:39 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!*s2)
		return ((char *)s1);
	while (*(s1 + i))
	{
		while (*(s1 + i + j) == *(s2 + j))
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
