/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 17:33:00 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/24 14:55:01 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*nlst;

	if (!(nlst = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		nlst->content = NULL;
		nlst->content_size = 0;
	}
	else
	{
		if (!(nlst->content = malloc(content_size)))
			return (NULL);
		ft_memcpy(nlst->content, content, content_size);
		nlst->content_size = content_size;
	}
	nlst->next = NULL;
	return (nlst);
}
