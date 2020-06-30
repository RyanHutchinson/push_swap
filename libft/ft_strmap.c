/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:25:05 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/10 16:15:38 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*fresh;

	i = 0;
	if (s && f)
	{
		if (!(fresh = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
			return (NULL);
		while (*(s + i))
		{
			*(fresh + i) = f(*(s + i));
			i++;
		}
		*(fresh + i) = '\0';
		return (fresh);
	}
	return (NULL);
}
