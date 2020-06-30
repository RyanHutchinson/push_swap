/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:31:51 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/10 16:14:44 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	size_t	len;

	if (s1 && s2)
	{
		len = ft_strlen(s1) + ft_strlen(s2) + 1;
		if (!(fresh = (char *)malloc(sizeof(char) * len)))
			return (NULL);
		ft_strcpy(fresh, s1);
		ft_strcat(fresh, s2);
		return (fresh);
	}
	return (NULL);
}
