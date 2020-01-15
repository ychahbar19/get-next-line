/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 12:40:24 by ychahbar          #+#    #+#             */
/*   Updated: 2018/11/24 14:45:44 by ychahbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		stocker(const int fd, char **line, char **str)
{
	char	*tmp;
	int		i;

	i = 0;
	while (str[fd][i] != '\n' && str[fd][i])
		i++;
	if (str[fd][i] == '\n')
	{
		*line = ft_strsub(str[fd], 0, i);
		tmp = ft_strdup(str[fd] + i + 1);
		if (!(*line) || !(tmp))
			return (-1);
		free(str[fd]);
		str[fd] = tmp;
		if (!(str[fd][0]))
			ft_strdel(&str[fd]);
	}
	else if (!(str[fd][i]))
	{
		if (!(*line = ft_strdup(str[fd])))
			return (-1);
		ft_strdel(&str[fd]);
	}
	return (1);
}

int		reader(int fd, char buff[BUFF_SIZE + 1], char *str[OPEN_MAX], char *tmp)
{
	int		ret;

	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		if (!(str[fd]))
			str[fd] = ft_strnew(1);
		if (!(tmp = ft_strjoin(str[fd], buff)))
			return (-1);
		free(str[fd]);
		str[fd] = tmp;
		if (ft_strchr(buff, '\n'))
			break ;
	}
	if (ret < 0)
		return (-1);
	return (0);
}

int		get_next_line(const int fd, char **line)
{
	static char		*str[OPEN_MAX];
	char			buff[BUFF_SIZE + 1];
	char			*tmp;

	tmp = NULL;
	if ((fd < 0) || (fd >= OPEN_MAX) || !(line) || (BUFF_SIZE <= 0))
		return (-1);
	if (reader(fd, buff, str, tmp) == -1)
		return (-1);
	else if (str[fd] && stocker(fd, line, str))
		return (1);
	return (0);
}
