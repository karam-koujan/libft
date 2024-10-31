/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:57:19 by kkoujan           #+#    #+#             */
/*   Updated: 2024/10/31 17:35:34 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	p = (char *)s;
	c = (char)c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (p[i] == c)
		{
			return (&p[i]);
		}
		i--;
	}
	if (*p == c)
	{
		return (p);
	}
	return (NULL);
}
