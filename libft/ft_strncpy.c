/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:44:59 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/06 17:34:05 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	int		i;

	i = 0;
	while (*(s2 + i) && n > 0)
	{
		*(s1 + i) = *(s2 + i);
		n--;
		i++;
	}
	while (n > 0)
	{
		*(s1 + i++) = '\0';
		n--;
	}
	return (s1);
}
