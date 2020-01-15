/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 15:29:31 by ychahbar          #+#    #+#             */
/*   Updated: 2018/07/05 17:14:49 by ychahbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t		i;
	size_t		j;
	char		*str;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] == '\t' || s[i] == '\n' || s[i] == ' ')
		i++;
	j = ft_strlen(s) - 1;
	if (i == j + 1)
	{
		if (!(str = (char *)malloc(sizeof(*str) * 1)))
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	while (s[j] == '\t' || s[j] == '\n' || s[j] == ' ')
		j--;
	if (!(str = ft_strsub(s, i, (j - i + 1))))
		return (NULL);
	return (str);
}
