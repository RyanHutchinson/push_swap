/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 13:41:08 by amoepi            #+#    #+#             */
/*   Updated: 2019/10/01 19:07:19 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static void	nl_del(char *s)
{
	int	i;

	i = 0;
	while (*(s + i) != '\n' && s + i)
		i++;
	if (*(s + i) == '\n')
		*(s + i) = '\0';
}

static int	get_data(char *s, char **s_out)
{
	char	*tmp;
	char	*tmp2;

	if (ft_strrchr(s, '\n'))
	{
		tmp = ft_strdup(s);
		s = ft_strcpy(s, ft_strchr(s, '\n') + 1);
		nl_del(tmp);
		tmp2 = *s_out;
		*s_out = ft_strjoin(*s_out, tmp);
		free(tmp);
		free(tmp2);
		return (1);
	}
	else
	{
		tmp = *s_out;
		*s_out = ft_strjoin(*s_out, s);
		free(tmp);
		ft_bzero(s, BUFF_SIZE);
		return (0);
	}
}

int			get_next_line(const int fd, char **line)
{
	static char	*data[65535];

	if (fd < 0 || !line || read(fd, line, 0) < 0)
		return (-1);
	if (!data[fd])
		data[fd] = ft_strnew(BUFF_SIZE);
	*line = ft_strnew(0);
	if (*data[fd] && get_data(data[fd], line))
		return (1);
	ft_bzero(data[fd], BUFF_SIZE);
	while (read(fd, data[fd], BUFF_SIZE) > 0)
		if (get_data(data[fd], line))
			return (1);
	if (**line == 0)
		return (0);
	return (1);
}
