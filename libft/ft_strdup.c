/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:32:39 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/06 17:54:27 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strdup(const char *s)
{
	char	*ns;
	int		i;

	i = 0;
	ns = (char *)malloc(ft_strlen(s) + 1);
	if (!ns)
		return (NULL);
	while (*(s + i))
	{
		*(ns + i) = *(s + i);
		i++;
	}
	*(ns + i) = '\0';
	return (ns);
}
