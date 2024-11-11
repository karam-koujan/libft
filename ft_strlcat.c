/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:23:30 by kkoujan           #+#    #+#             */
/*   Updated: 2024/11/09 10:54:10 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (dstsize == 0)
	{
		return (src_len);
	}
	dst_len = ft_strlen(dst);
	i = dst_len;
	if (dst_len >= dstsize)
	{
		return (src_len + dstsize);
	}
	while (i < dst_len + src_len && i < dstsize - 1)
	{
		dst[i] = src[i - dst_len];
		i++;
	}
	dst[i] = '\0';
	return (src_len + dst_len);
}
