/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 18:10:33 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/06 18:57:19 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*(s1 + i))
	{
		while (*(s2 + j))
		{
			if (*(s1 + i) == *(s2 + j))
				return ((char *)(s1 + i));
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
