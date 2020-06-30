/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:29:47 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/10 16:21:15 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (s && (int)len >= 0)
	{
		if (!(sub = (char *)malloc(sizeof(char) * ((unsigned int)len + 1))))
			return (NULL);
		ft_strncpy(sub, (s + start), (unsigned int)len);
		*(sub + (unsigned int)len) = '\0';
		return (sub);
	}
	return (NULL);
}
