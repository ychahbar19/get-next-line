/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 14:51:15 by ychahbar          #+#    #+#             */
/*   Updated: 2018/06/26 14:55:15 by ychahbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if (s1 == NULL)
		return (0);
	if (s2 == NULL)
		return (0);
	if (ft_strcmp(s1, s2) == 0)
		return (1);
	return (0);
}
