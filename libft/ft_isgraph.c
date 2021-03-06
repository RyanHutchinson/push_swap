/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 18:24:53 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/06 17:40:39 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_isgraph(int n)
{
	if (ft_ispunct(n) || ft_isalnum(n))
		return (1);
	else
		return (0);
}
