/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:31:54 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/06 17:47:16 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*ns;
	int		i;

	i = 0;
	if (!(ns = (char *)malloc(n + 1)))
		return (NULL);
	while (*(s + i))
	{
		*(ns + i) = *(s + i);
		i++;
	}
	*(ns + i) = '\0';
	return (ns);
}
