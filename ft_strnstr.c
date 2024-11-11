/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:23:52 by kkoujan           #+#    #+#             */
/*   Updated: 2024/11/11 13:20:09 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	search_needle(const char *haystack, const char *needle,
size_t k, size_t len)
{
	int	j;

	j = 1;
	while (k < len && haystack[k] && haystack[k] == needle[j])
	{
		j++;
		k++;
	}
	return (j);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*p;

	i = 0;
	j = 0;
	p = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		p = (char *)&haystack[i];
		if (haystack[i] == needle[j])
		{
			j = search_needle(haystack, needle, i + 1, len);
			if (!needle[j])
			{
				return (p);
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}
