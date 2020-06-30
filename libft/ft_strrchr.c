/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 17:18:47 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/06 17:36:01 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strrchr(const char *s, int n)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = NULL;
	while (*(s + i))
	{
		if (*(s + i) == n)
			ptr = (char *)(s + i);
		i++;
	}
	if (n == '\0')
		ptr = (char *)(s + i);
	return (ptr);
}
