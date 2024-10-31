/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:54:19 by kkoujan           #+#    #+#             */
/*   Updated: 2024/10/31 15:59:10 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	if (src == NULL && dst == NULL)
		return (NULL);
	i = 0;
	d = (char *)dst;
	s = (const char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
