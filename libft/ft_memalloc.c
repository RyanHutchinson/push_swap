/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 14:38:55 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/10 15:18:21 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	void	*mem;
	char	*ptmem;

	i = -1;
	if (!(mem = (void *)malloc(sizeof(void) * size)))
		return (NULL);
	ptmem = mem;
	while (++i < size)
		*(ptmem + i) = '\0';
	return (mem);
}
