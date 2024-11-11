/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:54:33 by kkoujan           #+#    #+#             */
/*   Updated: 2024/11/04 16:29:47 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	uc;

	i = 0;
	p = (unsigned char *)s;
	uc = (unsigned char)c;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (p[i] == uc)
		{
			return ((void *)&p[i]);
		}
		i++;
	}
	return (NULL);
}
