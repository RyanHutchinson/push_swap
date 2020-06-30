/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 17:44:26 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/27 22:42:50 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while ((*(s1 + i) == *(s2 + i)) && *(s1 + i) && *(s2 + i))
		i++;
	if ((unsigned char)*(s1 + i) - (unsigned char)*(s2 + i) > 0)
		return (1);
	else if ((unsigned char)*(s1 + i) - (unsigned char)*(s2 + i) < 0)
		return (-1);
	return (0);
}
